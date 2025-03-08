import XCTest
import SwiftTreeSitter
import TreeSitterOCamllex

final class TreeSitterOCamllexTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_ocamllex())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading OCamllex grammar")
    }
}
