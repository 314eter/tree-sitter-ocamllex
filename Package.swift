// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterOCamllex",
    products: [
        .library(name: "TreeSitterOCamllex", targets: ["TreeSitterOCamllex"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterOCamllex",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                "src/scanner.c",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterOCamllexTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterOCamllex",
            ],
            path: "bindings/swift/TreeSitterOCamllexTests"
        )
    ],
    cLanguageStandard: .c11
)
