import XCTest
import SwiftTreeSitter
import TreeSitterNoti

final class TreeSitterNotiTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_noti())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Noti grammar")
    }
}
