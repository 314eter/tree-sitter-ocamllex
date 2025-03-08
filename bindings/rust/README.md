# tree-sitter-ocamllex

[![CI][ci]](https://github.com/314eter/tree-sitter-ocamllex/actions/workflows/ci.yml)
[![crates][crates]](https://crates.io/crates/tree-sitter-ocamllex)

This crate provides OCamllex language support for the [tree-sitter][] parsing library.

## Installation

To use this crate, add it to the `[dependencies]` section of your `Cargo.toml`
file. (Note that you will probably also need to depend on the
[`tree-sitter`][tree-sitter crate] crate to use the parsed result in any useful
way.)

```toml
[dependencies]
tree-sitter = "0.24"
tree-sitter-ocamllex = "0.24"
```

## Usage

Typically, you will use the [`LANGUAGE`][LANGUAGE] constant to add this language
to a tree-sitter [`Parser`][Parser], and then use the parser to parse some code:

```rust
let code = r#"
    rule main = parse
      | _ { "" }
"#;
let mut parser = tree_sitter::Parser::new();
let language = tree_sitter_ocamllex::LANGUAGE;
parser
    .set_language(&language.into())
    .expect("Error loading OCamllex grammar");
let tree = parser.parse(code, None).unwrap;
```

[ci]: https://img.shields.io/github/actions/workflow/status/314eter/tree-sitter-ocamllex/ci.yml?logo=github&label=CI
[crates]: https://img.shields.io/crates/v/tree-sitter-ocamllex?logo=rust
[tree-sitter]: https://tree-sitter.github.io/
[tree-sitter crate]: https://crates.io/crates/tree-sitter
[LANGUAGE]: https://docs.rs/tree-sitter-ocamllex/*/tree_sitter_ocamllex/constant.LANGUAGE.html
[Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
