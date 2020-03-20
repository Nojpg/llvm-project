//
// Created by sovereign on 3/20/20.
//
#include "clang/StaticAnalyzer/Core/Checker.h"
#include "clang/StaticAnalyzer/Core/BugReporter/BugType.h"


using namespace clang;
using namespace ento;

namespace {
    class ThreadChecker : public Checker<check::PreStmt<CallExpr>> {
        mutable std::unique_ptr<BugType> BT;

    public:
        void checkPreStmt(const CallExpr *CE, CheckerContext &C) const ;
    };
}
