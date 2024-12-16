---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template/types.hpp
    title: template/types.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: template/template.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/template/template.test.cpp
    title: test/template/template.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"template/macros.hpp\"\n\n#line 2 \"template/types.hpp\"\n\
    \n#include <cstdint>\n#include <string>\n\n#if __has_include(<boost/multiprecision/cpp_int.hpp>)\n\
    #include <boost/multiprecision/cpp_int.hpp>\nnamespace ku {\nusing iinf_t = boost::multiprecision::cpp_int;\n\
    };  // namespace ku\n#endif\n\nnamespace ku {\nusing i8_t = std::int_least8_t;\n\
    using i16_t = std::int_least16_t;\nusing i32_t = std::int_least32_t;\nusing i64_t\
    \ = std::int_least64_t;\nusing i128_t = __int128_t;\n\nusing u8_t = std::uint_least8_t;\n\
    using u16_t = std::uint_least16_t;\nusing u32_t = std::uint_least32_t;\nusing\
    \ u64_t = std::uint_least64_t;\nusing u128_t = __uint128_t;\n};  // namespace\
    \ ku\n#line 4 \"template/macros.hpp\"\n\n#include <iterator>\n\n#if defined(DEBUG)\
    \ && __has_include(<cpp-dump/cpp-dump.hpp>)\n#include <cpp-dump/cpp-dump.hpp>\n\
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
    #define all(a) std::begin(a), std::end(a)\n#define rall(a) std::rbegin(a), std::rend(a)\n"
  code: "#pragma once\n\n#include \"types.hpp\"\n\n#include <iterator>\n\n#if defined(DEBUG)\
    \ && __has_include(<cpp-dump/cpp-dump.hpp>)\n#include <cpp-dump/cpp-dump.hpp>\n\
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
    #define all(a) std::begin(a), std::end(a)\n#define rall(a) std::rbegin(a), std::rend(a)\n"
  dependsOn:
  - template/types.hpp
  isVerificationFile: false
  path: template/macros.hpp
  requiredBy:
  - template/template.hpp
  timestamp: '2024-12-15 11:19:23+00:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/template/template.test.cpp
documentation_of: template/macros.hpp
layout: document
redirect_from:
- /library/template/macros.hpp
- /library/template/macros.hpp.html
title: template/macros.hpp
---
