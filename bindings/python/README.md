# tree-sitter-ocamllex

[![CI][ci]](https://github.com/314eter/tree-sitter-ocamllex/actions/workflows/ci.yml)
[![pypi][pypi]](https://pypi.org/project/tree-sitter-ocamllex/)

This module provides an OCamllex grammar for the [tree-sitter][] parsing library.

## Installation

```sh
pip install tree-sitter-ocamllex
```

You will probably also need the [tree-sitter binding][tree-sitter binding].

```sh
pip install tree-sitter
```

## Usage

Load the grammar as a `Language` object:

```python
import tree_sitter_ocamllex
from tree_sitter import Language, Parser

language = Language(tree_sitter_ocamllex.language())
```

Create a `Parser` and configure it to use the language:

```python
parser = Parser(language)
```

Parse some source code:

```python
tree = parser.parse(
    b"""
    rule main = parse
      | _ { "" }
    """
)
```

[ci]: https://img.shields.io/github/actions/workflow/status/314eter/tree-sitter-ocamllex/ci.yml?logo=github&label=CI
[pypi]: https://img.shields.io/pypi/v/tree-sitter-ocamllex?logo=pypi&logoColor=white&label=PyPI
[tree-sitter]: https://tree-sitter.github.io/tree-sitter/
[tree-sitter binding]: https://pypi.org/project/tree-sitter/
