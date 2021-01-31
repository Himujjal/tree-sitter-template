# tree-sitter-lang

Tree-sitter grammar for [lang](https://lang.com)

# Install

```sh
npm i tree-sitter-lang tree-sitter
```

# Reference

[tree-sitter.github.io](https://tree-sitter.github.io)

# Usage in JS

```javascript
const Parser = require("tree-sitter");
const lang = require("tree-sitter-lang");

const parser = new Parser();
parser.setLanguage(lang);

const sourceCode = ``;

const tree = parser.parse(sourceCode);
console.log(tree.rootNode.toString());

// (program)
```

# LICENSE

[MIT](./LICENSE)
