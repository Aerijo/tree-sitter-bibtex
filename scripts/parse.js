const Parser = require('tree-sitter')
const bibtex = require('../../tree-sitter-bibtex')

const parser = new Parser()

parser.setLanguage(bibtex);

const test1 = `@MISC{test,let="wda"}`;

let tree = parser.parse(test1);

console.log(tree.rootNode.toString());
/* should be
(program (entry (entry_name) (key) (field (identifier) (value (token (string))))))
*/
