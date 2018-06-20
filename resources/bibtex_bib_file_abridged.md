# Parsing `.bib` files for `bibtex`

This file aims to document the behaviour of bibtex when it parses a `.bib` file. A focus is placed on syntax, as this is ultimately for writing a tree-sitter parser. Things like how it stores information will be ignored.

The parser itself is written in WEB, and should be relatively straightforward to emulate. It also helps that this has been done before, as [this repository](https://github.com/aclements/biblib) provides a PEG grammar that the author says to have derived from the source too.

Some notes before I start:

- It is particularly fond of global variables and macro definitions. This seems to be in an attempt to save space, but please do not do this with your own code. I've explained these globals the best I can.
  - Particularly, there are variables used to keep track of the position on the line. A bunch of scan functions alter these directly, so whenever you see `scan...`, it's probably moved the "cursor" to the end of the scan.

- I don't actually know WEB syntax. It seems to be a cross between markup and PASCAL. What I've gathered is
  - `@<...@>=` is a `procedure` definition
  - `@<...@>` [note no `=` sign] runs a PASCAL `procedure` defined in the above manor
  - There is an explanation here http://mirror.aarnet.edu.au/pub/CTAN/info/knuth/webman.pdf

## Unsorted
- An entry key will be stripped ofleading whitespace, and the scan will stop at the first whitespace character or comma. So in effect, an entry key is anything that's not whitespace or a comma.

## Entry point [5100]
```%WEB
@<Read the \.{.bib} file(s)@>=
begin
@<Final initialization for \.{.bib} processing@>;
read_performed := true;
bib_ptr := 0;
while (bib_ptr < num_bib_files) do
    begin
    print ('Database file #',bib_ptr+1:0,': ');
    print_bib_name;@/
    bib_line_num := 0;          {initialize to get the first input line}
    buf_ptr2 := last;
    while (not eof(cur_bib_file)) do
        get_bib_command_or_entry_and_process;
    a_close (cur_bib_file);
    incr(bib_ptr);
    end;
reading_completed := true;
  trace
  trace_pr_ln ('Finished reading the database file(s)');
  ecart@/
@<Final initialization for processing the entries@>;
read_completed := true;
end
```
```python
for bib_file in bib_file_list:
  while not at_end_of_file:
    get_and_process_next_entry()
```


### Getting and processing an entry [5390]
```%WEB
@<Scan for and process a \.{.bib} command or database entry@>=
procedure get_bib_command_or_entry_and_process;
label cite_already_set,@!first_time_entry,@!loop_exit,@!exit;
begin
at_bib_command := false;@/
@<Skip to the next database entry or \.{.bib} command@>;
@<Scan the entry type or scan and process the \.{.bib} command@>;
eat_bib_white_and_eof_check;
@<Scan the entry's database key@>;
eat_bib_white_and_eof_check;
@<Scan the entry's list of fields@>;
exit:
end;
```
```python
def get_and_process_next_entry():
  goto_next_entry() # literally skips until next @ character
  scan_entry_or_process_command() # potentially goes to exit label if a command

  skip_whitespace()
  scan_entry_key()

  skip_whitespace()
  scan_entry_fields()

  # EXIT_LABEL_HERE!!
```


#### Skip to next entry [5409]
```%WEB
@<Skip to the next database entry or \.{.bib} command@>=
while (not scan1(at_sign)) do                   {no |at_sign|; get next line}
    begin
    if (not input_ln(cur_bib_file)) then        {end-of-file}
        return;
    incr(bib_line_num);
    buf_ptr2 := 0;
    end
```
```python
def goto_next_entry():
  while char_at(current_index) != '@':
    if end_of_file:
      return
    elif end_of_line:
      goto_next_line()
    else:
      current_index += 1
  # When we are done, the current character is either `@` or we are at the end of the file
```

#### Get entry type or process bib command [5426]
```%WEB
@<Scan the entry type or scan and process the \.{.bib} command@>=
begin
if (scan_char <> at_sign) then
    confusion ('An "',xchr[at_sign],'" disappeared');
incr(buf_ptr2);                                 {skip over the |at_sign|}
eat_bib_white_and_eof_check;
scan_identifier (left_brace,left_paren,left_paren);
bib_identifier_scan_check ('an entry type');
  trace
  trace_pr_token;
  trace_pr_ln (' is an entry type or a database-file command');
  ecart@/
lower_case (buffer, buf_ptr1, token_len);       {ignore case differences}
command_num := ilk_info[
        str_lookup(buffer,buf_ptr1,token_len,bib_command_ilk,dont_insert)];
if (hash_found) then
    @<Process a \.{.bib} command@>
else
    begin                                       {process an entry type}
    entry_type_loc := str_lookup(
                        buffer,buf_ptr1,token_len,bst_fn_ilk,dont_insert);
    if ((not hash_found) or (fn_type[entry_type_loc]<>wiz_defined)) then@/
        type_exists := false  {no such entry type defined in the \.{.bst} file}
      else
        type_exists := true;
    end;
end
```
```python
def scan_entry_or_process_command():
  current_index += 1 # skip over `@`
  skip_whitespace()

  endChars = ["{", "("]
  scan_identifier(endChars)

  confirm_current_char_is_one_of(whitespace, "{", "(") # current is the char after the end of the identifier

  if identifier == command:
    process_command()
    # And goto end of gathering "entry"
  else:
    process_entry()

```


#### Processing a command [5461]
```%WEB
@<Process a \.{.bib} command@>=
begin
at_bib_command := true;
case (command_num) of
    n_bib_comment : @<Process a \.{comment} command@>;
    n_bib_preamble : @<Process a \.{preamble} command@>;
    n_bib_string : @<Process a \.{string} command@>;
    othercases bib_cmd_confusion
endcases;
end
```
```python
def process_command():
  if command == "comment":
    process_comment() # literally just returns (return == goto exit)
  elif command == "preamble":
    process_preamble()
  else:
    process_string()
```


#### Process preamble [5515]

```%WEB
@<Process a \.{preamble} command@>=
begin
if (preamble_ptr = max_bib_files) then
    bib_err ('You''ve exceeded ',max_bib_files:0,' preamble commands');
eat_bib_white_and_eof_check;
if (scan_char = left_brace) then
    right_outer_delim := right_brace
else if (scan_char = left_paren) then
    right_outer_delim := right_paren
else
    bib_one_of_two_expected_err (left_brace,left_paren);
incr(buf_ptr2);                         {skip over the left-delimiter}
eat_bib_white_and_eof_check;
store_field := true;
if (not scan_and_store_the_field_value_and_eat_white) then
    return;
if (scan_char <> right_outer_delim) then
    bib_err ('Missing "',xchr[right_outer_delim],'" in preamble command');
incr(buf_ptr2);                         {skip over the |right_outer_delim|}
return;
end
```
```python
def process_preamble():

  skip_whitespace()

  if char_at(current_index) == "{":
    right_outer_delim = "}"
  elif char_at(current_index) == "(":
    right_outer_delim = ")"
  else:
    raise Exception("Should be on the starting delim")

  current_index += 1
  skip_whitespace()
  scan_field_value()

  skip_whitespace()

```

### Scanning functions

#### Scan field value [5669]

A "field value" is made up of one or more "field tokens". If the character following the end of the previous field token is the concat character `#`, then another token is read in.

```%WEB
@<Procedures and functions for input scanning@>=
function scan_and_store_the_field_value_and_eat_white : boolean;
label exit;
begin
scan_and_store_the_field_value_and_eat_white := false;
                                        {now it's easy to exit if necessary}
field_end := 0;
if (not scan_a_field_token_and_eat_white) then {<- false if serious syntax error}
    return;
while (scan_char = concat_char) do      {scan remaining field tokens}
    begin
    incr(buf_ptr2);                     {skip over the |concat_char|}
    eat_bib_white_and_eof_check;
    if (not scan_a_field_token_and_eat_white) then
        return;
    end;
if (store_field) then
    @<Store the field value string@>;
scan_and_store_the_field_value_and_eat_white := true;
exit:
end;
```
```python
def scan_field():
  # Starts on first field token (non-whitespace character)
  scan_field_token_and_skip_whitespace()

  while char_at(current_index) == '#':
    current_index += 1
    skip_whitespace()
    scan_field_token_and_skip_whitespace()
```

#### Scan field token [5704]
```%WEB
@
Each field token is either a nonnegative number, a macro name (like
`jan'), or a brace-balanced string delimited by either |double_quote|s
or braces.  Thus there are four possibilities for the first character
of the field token: If it's a |left_brace| or a |double_quote|, the
token (with balanced braces, up to the matching |right_str_delim|) is
a string; if it's |numeric|, the token is a number; if it's anything
else, the token is a macro name (and should thus have been defined by
either the \.{.bst}-file's \.{macro} command or the \.{.bib}-file's
\.{string} command).  This function returns |false| if there was a
serious syntax error.

@<The scanning function |scan_a_field_token_and_eat_white|@>=
function scan_a_field_token_and_eat_white : boolean;
label exit;
begin
scan_a_field_token_and_eat_white := false; {now it's easy to exit if necessary}
case (scan_char) of
    left_brace :
        begin
        right_str_delim := right_brace;
        if (not scan_balanced_braces) then
            return;
        end;
    double_quote :
        begin
        right_str_delim := double_quote;
        if (not scan_balanced_braces) then
            return;
        end;
    "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" :
        @<Scan a number@>;
    othercases
        @<Scan a macro name@>
endcases;
eat_bib_white_and_eof_check;
scan_a_field_token_and_eat_white := true;
exit:
end;
```
```python
def scan_field_token_and_skip_whitespace():
  # Starts on first field token (first non-whitespace)
```

#### Scan balanced braces [5792]
```%WEB
@<The scanning function |scan_balanced_braces|@>=
function scan_balanced_braces : boolean;
label loop_exit,@!exit;
begin
scan_balanced_braces := false;          {now it's easy to exit if necessary}
incr(buf_ptr2);                         {skip over the left-delimiter}
check_for_and_compress_bib_white_space;
if (field_end > 1) then
  if (field_vl_str[field_end-1] = space) then
    if (field_vl_str[field_end-2] = space) then {remove wrongly added |space|}
        decr(field_end);
bib_brace_level := 0;           {and we're at a non|white_space| character}
if (store_field) then
    @<Do a full brace-balanced scan@>
  else
    @<Do a quick brace-balanced scan@>;
incr(buf_ptr2);                         {skip over the |right_str_delim|}
scan_balanced_braces := true;
exit:
end;
```
```python
def scan_balanced_braces():
  current_index += 1 # skip left delim
  skip_whitespace()
```

#### Scan on line [2081]
```%WEB
@<Procedures and functions for input scanning@>=
function scan1 (@!char1:ASCII_code) : boolean;
begin
buf_ptr1 := buf_ptr2;
                        {scan until end-of-line or the specified character}
while ((scan_char <> char1) and (buf_ptr2 < last)) do
    incr(buf_ptr2);
if (buf_ptr2 < last) then
    scan1 := true
  else
    scan1 := false;
end;
```
```python
def scan1(scan_char):
  """
  Look for given character on the line, starting from the current position.
  - If found, set the end position (global) to the index of the scanned
      for character and directly return true
  - If not found on the line, return false (and position will be the last
      character on the line)
  """
  start_index = current_index # both global
  while current_index < line_length:
    if char_at(current_index) == scan_char:
      return True # position of the character is globally set in `buf_ptr2`
    else:
      current_index += 1

  return False # if not found on current line
```


#### Scan identifier [2211]
```%WEB
@<Procedures and functions for input scanning@>=
procedure scan_identifier (@!char1,@!char2,@!char3:ASCII_code);
begin
buf_ptr1 := buf_ptr2;
if (lex_class[scan_char] <> numeric) then {scan until end-of-line or an |illegal_id_char|}
    while ((id_class[scan_char] = legal_id_char) and (buf_ptr2 < last)) do
        incr(buf_ptr2);
if (token_len = 0) then
    scan_result := id_null
else if ((lex_class[scan_char] = white_space) or (buf_ptr2 = last)) then
    scan_result := white_adjacent
else if ((scan_char = char1) or (scan_char = char2) or (scan_char = char3))
                                                                        then
    scan_result := specified_char_adjacent
else
    scan_result := other_char_adjacent;
end;
```
```python
def scan_identifier(end_char1, end_char2, end_char3):
  """
  An identifier is like a "word" in BiBTeX. It's used for entry names,
  field keys, and even possibly field values. Valid are:
  - First character non-numeric visible ASCII minus "#%'(),={} (and space)
  - Subsequent as above, but numbers allowed too

  I've prepared a regex to demonstrate this https://regex101.com/r/fAkBEf/1
  """
  start_index = current_index
  if not isnumeric(char_at(current_index)):
    scan_for_legal_id_name_on_line() # starts check at current index.
    # Ends on first illegal character or end of line (which is an illegal character)
  if is_emtpy(identifier):
    return empty_id
  else:
    return scan_end_next_char_type
```
