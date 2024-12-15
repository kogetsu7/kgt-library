---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template/includes.hpp
    title: template/includes.hpp
  - icon: ':heavy_check_mark:'
    path: template/macros.hpp
    title: template/macros.hpp
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: template/template.hpp
  - icon: ':heavy_check_mark:'
    path: template/types.hpp
    title: template/types.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
  bundledCode: "#line 1 \"verify/template/template.test.cpp\"\n#define PROBLEM \\\n\
    \    \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\n\n\
    #line 2 \"template/template.hpp\"\n\n#line 2 \"template/includes.hpp\"\n\n#if\
    \ defined(DEBUG)\n#define _GLIBCXX_DEBUG\n#endif\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#if __has_include(<atcoder/all>)\n#include <atcoder/all>\n\
    using namespace atcoder;\n#endif\n#line 2 \"template/macros.hpp\"\n\n#line 2 \"\
    template/types.hpp\"\n\n#line 5 \"template/types.hpp\"\n\n#if __has_include(<boost/multiprecision/cpp_int.hpp>)\n\
    #include <boost/multiprecision/cpp_int.hpp>\nnamespace ku {\nusing iinf_t = boost::multiprecision::cpp_int;\n\
    };  // namespace ku\n#endif\n\nnamespace ku {\nusing i8_t = std::int_least8_t;\n\
    using i16_t = std::int_least16_t;\nusing i32_t = std::int_least32_t;\nusing i64_t\
    \ = std::int_least64_t;\nusing i128_t = __int128_t;\n\nusing u8_t = std::uint_least8_t;\n\
    using u16_t = std::uint_least16_t;\nusing u32_t = std::uint_least32_t;\nusing\
    \ u64_t = std::uint_least64_t;\nusing u128_t = __uint128_t;\n\nusing str = std::string;\n\
    };  // namespace ku\n#line 4 \"template/macros.hpp\"\n\n#line 6 \"template/macros.hpp\"\
    \n\n#if defined(DEBUG) && __has_include(<cpp-dump/cpp-dump.hpp>)\n#include <cpp-dump/cpp-dump.hpp>\n\
    #define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#define dump(...) ((void)0)\n\
    #endif\n\n#define overload4(a, b, c, d, e, ...) e\n\n#define rep1(i, a) for (ku::i64_t\
    \ i = 0; i < static_cast<ku::i64_t>(a); ++i)\n#define rep2(i, a, b)          \
    \                   \\\n    for (ku::i64_t i = static_cast<ku::i64_t>(a); \\\n\
    \         i < static_cast<ku::i64_t>(b); ++i)\n#define rep3(i, a, b, c)      \
    \                    \\\n    for (ku::i64_t i = static_cast<ku::i64_t>(a); \\\n\
    \         i < static_cast<ku::i64_t>(b); i += static_cast<ku::i64_t>(c))\n#define\
    \ rep(...) overload4(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\n\n#define rrep1(i,\
    \ a) for (ku::i64_t i = static_cast<ku::i64_t>(a); i >= 0; --i)\n#define rrep2(i,\
    \ a, b)                            \\\n    for (ku::i64_t i = static_cast<ku::i64_t>(a);\
    \ \\\n         i >= static_cast<ku::i64_t>(b); --i)\n#define rrep3(i, a, b, c)\
    \                         \\\n    for (ku::i64_t i = static_cast<ku::i64_t>(a);\
    \ \\\n         i >= static_cast<ku::i64_t>(b); i -= static_cast<ku::i64_t>(c))\n\
    #define rrep(...) overload4(__VA_ARGS__, rrep3, rrep2, rrep1)(__VA_ARGS__)\n\n\
    #define all(a) std::begin(a), std::end(a)\n#define rall(a) std::rbegin(a), std::rend(a)\n\
    #line 6 \"template/template.hpp\"\n\nusing namespace ku;\n#line 5 \"verify/template/template.test.cpp\"\
    \n\nint main() {\n    i64_t s = 0;\n\n    s = 0;\n    rep(i, 10) { s += i; }\n\
    \    assert(s == 45);\n\n    s = 0;\n    rep(i, 0, 10) { s += i; }\n    assert(s\
    \ == 45);\n\n    s = 0;\n    rep(i, 0, 10, 1) { s += i; }\n    assert(s == 45);\n\
    \n    s = 0;\n    rrep(i, 9) { s += i; }\n    assert(s == 45);\n\n    s = 0;\n\
    \    rrep(i, 9, 0) { s += i; }\n    assert(s == 45);\n\n    s = 0;\n    rrep(i,\
    \ 9, 0, 1) { s += i; }\n    assert(s == 45);\n\n    cout << \"Hello World\"\n\
    \         << \"\\n\";\n\n    return 0;\n}\n"
  code: "#define PROBLEM \\\n    \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n\n#include \"../../template/template.hpp\"\n\nint main() {\n    i64_t s = 0;\n\
    \n    s = 0;\n    rep(i, 10) { s += i; }\n    assert(s == 45);\n\n    s = 0;\n\
    \    rep(i, 0, 10) { s += i; }\n    assert(s == 45);\n\n    s = 0;\n    rep(i,\
    \ 0, 10, 1) { s += i; }\n    assert(s == 45);\n\n    s = 0;\n    rrep(i, 9) {\
    \ s += i; }\n    assert(s == 45);\n\n    s = 0;\n    rrep(i, 9, 0) { s += i; }\n\
    \    assert(s == 45);\n\n    s = 0;\n    rrep(i, 9, 0, 1) { s += i; }\n    assert(s\
    \ == 45);\n\n    cout << \"Hello World\"\n         << \"\\n\";\n\n    return 0;\n\
    }\n"
  dependsOn:
  - template/template.hpp
  - template/includes.hpp
  - template/macros.hpp
  - template/types.hpp
  isVerificationFile: true
  path: verify/template/template.test.cpp
  requiredBy: []
  timestamp: '2024-12-15 15:13:21+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/template/template.test.cpp
layout: document
redirect_from:
- /verify/verify/template/template.test.cpp
- /verify/verify/template/template.test.cpp.html
title: verify/template/template.test.cpp
---
