set(LLVM_LINK_COMPONENTS
        Support
        )

set(LLVM_EXPORTED_SYMBOL_FILE ${CMAKE_CURRENT_SOURCE_DIR}/ThreadCheckerPlugin.exports)
add_llvm_library(ThreadChecker MODULE BUIDTREE_ONLY ThreadChecker.cpp PLUGIN_TOOL clang)

clang_target_link_libraries(ThreadChecker PRIVATE
        clangAnalysis
        clangAST
        clangStaticAnalyzerCore
        clangStaticAnalyzerFrontend
        )