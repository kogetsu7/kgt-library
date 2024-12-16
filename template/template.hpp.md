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
    path: template/types.hpp
    title: template/types.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/template/template.test.cpp
    title: test/template/template.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"template/template.hpp\"\n\n#line 2 \"template/includes.hpp\"\
    \n\n#if defined(DEBUG)\n#define _GLIBCXX_DEBUG\n#endif\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#if __has_include(<atcoder/all>)\n#include <atcoder/all>\n\
    using namespace atcoder;\n#endif\n#line 2 \"template/macros.hpp\"\n\n#line 2 \"\
    template/types.hpp\"\n\n#line 5 \"template/types.hpp\"\n\n#if __has_include(<boost/multiprecision/cpp_int.hpp>)\n\
    #include <boost/multiprecision/cpp_int.hpp>\nnamespace kgt {\nusing iinf_t = boost::multiprecision::cpp_int;\n\
    };  // namespace kgt\n#endif\n\nnamespace kgt {\nusing i8_t = std::int_least8_t;\n\
    using i16_t = std::int_least16_t;\nusing i32_t = std::int_least32_t;\nusing i64_t\
    \ = std::int_least64_t;\nusing i128_t = __int128_t;\n\nusing u8_t = std::uint_least8_t;\n\
    using u16_t = std::uint_least16_t;\nusing u32_t = std::uint_least32_t;\nusing\
    \ u64_t = std::uint_least64_t;\nusing u128_t = __uint128_t;\n};  // namespace\
    \ kgt\n#line 4 \"template/macros.hpp\"\n\n#line 6 \"template/macros.hpp\"\n\n\
    #if defined(DEBUG) && __has_include(<cpp-dump/cpp-dump.hpp>)\n#include <cpp-dump/cpp-dump.hpp>\n\
    #define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#define dump(...) ((void)0)\n\
    #endif\n\n#define overload4(a, b, c, d, e, ...) e\n\n#define rep1(i, a) for (kgt::i64_t\
    \ i = 0; i < static_cast<kgt::i64_t>(a); ++i)\n#define rep2(i, a, b)         \
    \                      \\\n    for (kgt::i64_t i = static_cast<kgt::i64_t>(a);\
    \ \\\n         i < static_cast<kgt::i64_t>(b); ++i)\n#define rep3(i, a, b, c)\
    \                            \\\n    for (kgt::i64_t i = static_cast<kgt::i64_t>(a);\
    \ \\\n         i < static_cast<kgt::i64_t>(b); i += static_cast<kgt::i64_t>(c))\n\
    #define rep(...) overload4(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\n\n#define\
    \ rrep1(i, a) for (kgt::i64_t i = static_cast<kgt::i64_t>(a); i >= 0; --i)\n#define\
    \ rrep2(i, a, b)                              \\\n    for (kgt::i64_t i = static_cast<kgt::i64_t>(a);\
    \ \\\n         i >= static_cast<kgt::i64_t>(b); --i)\n#define rrep3(i, a, b, c)\
    \                           \\\n    for (kgt::i64_t i = static_cast<kgt::i64_t>(a);\
    \ \\\n         i >= static_cast<kgt::i64_t>(b); i -= static_cast<kgt::i64_t>(c))\n\
    #define rrep(...) overload4(__VA_ARGS__, rrep3, rrep2, rrep1)(__VA_ARGS__)\n\n\
    #define all(a) std::begin(a), std::end(a)\n#define rall(a) std::rbegin(a), std::rend(a)\n\
    #line 6 \"template/template.hpp\"\n\nusing namespace kgt;\n"
  code: '#pragma once


    #include "includes.hpp"

    #include "macros.hpp"

    #include "types.hpp"


    using namespace kgt;

    '
  dependsOn:
  - template/includes.hpp
  - template/macros.hpp
  - template/types.hpp
  isVerificationFile: false
  path: template/template.hpp
  requiredBy: []
  timestamp: '2024-12-16 16:05:04+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/template/template.test.cpp
documentation_of: template/template.hpp
layout: document
redirect_from:
- /library/template/template.hpp
- /library/template/template.hpp.html
title: template/template.hpp
---
