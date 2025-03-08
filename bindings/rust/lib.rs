//! This crate provides an OCamllex grammar for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the  [`LANGUAGE`][LANGUAGE] constant to add this language
//! to a tree-sitter [`Parser`][Parser], and then use the parser to parse some code:
//!
//! ```
//! let code = r#"
//!   rule main = parse
//!     | _ { "" }
//! "#;
//! let mut parser = tree_sitter::Parser::new();
//! let language = tree_sitter_ocamllex::LANGUAGE;
//! parser
//!     .set_language(&language.into())
//!     .expect("Error loading OCamllex language");
//! let tree = parser.parse(code, None).unwrap();
//! assert!(!tree.root_node().has_error());
//! ```
//!
//! [LANGUAGE]: constant.LANGUAGE.html
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter_language::LanguageFn;

extern "C" {
    fn tree_sitter_ocamllex() -> *const ();
}

/// The tree-sitter [`LanguageFn`][LanguageFn] for OCamllex.
///
/// [LanguageFn]: https://docs.rs/tree-sitter-language/*/tree_sitter_language/struct.LanguageFn.html
pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_ocamllex) };

/// The content of the [`node-types.json`][] file for OCamllex.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers/6-static-node-types.html
pub const NODE_TYPES: &'static str = include_str!("../../src/node-types.json");

/// The syntax highlighting query for OCamllex.
pub const HIGHLIGHTS_QUERY: &'static str = include_str!("../../queries/highlights.scm");

/// The injections query for OCamllex.
pub const INJECTIONS_QUERY: &'static str = include_str!("../../queries/injections.scm");

#[cfg(test)]
mod tests {
    #[test]
    fn test_ocamllex() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::LANGUAGE.into())
            .expect("Error loading OCamllex language");

        let code = r#"
            rule main = parse
              | _ { "" }
        "#;

        let tree = parser.parse(code, None).unwrap();
        let root = tree.root_node();
        assert!(!root.has_error());
    }
}
