/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "lang",

  externals: ($) => [],

  extras: ($) => [/\s+/],

  conflicts: ($) => [],

  keywords: () => ["key"],

  rules: {
    document: ($) => repeat($.node),

    node: ($) => /[^\s]+/,
  },
});
