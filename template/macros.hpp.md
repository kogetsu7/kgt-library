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
    \n#include <complex>\n#include <cstddef>\n#include <cstdint>\n#include <string>\n\
    #include <type_traits>\n\n#if __has_include(<boost/multiprecision/cpp_int.hpp>)\n\
    #include <boost/multiprecision/cpp_int.hpp>\nnamespace kgt {\nusing iinf_t = boost::multiprecision::cpp_int;\n\
    };  // namespace kgt\n#endif\n\nnamespace kgt {\nusing i8_t = std::int_least8_t;\n\
    using i16_t = std::int_least16_t;\nusing i32_t = std::int_least32_t;\nusing i64_t\
    \ = std::int_least64_t;\nusing i128_t = __int128_t;\n\nusing u8_t = std::uint_least8_t;\n\
    using u16_t = std::uint_least16_t;\nusing u32_t = std::uint_least32_t;\nusing\
    \ u64_t = std::uint_least64_t;\nusing u128_t = __uint128_t;\n\nusing size_t =\
    \ std::size_t;\n\nusing real_t = long double;\nusing complex_t = std::complex<real_t>;\n\
    \nusing str_t = std::string;\n\ntemplate <class T>\nusing is_signed_int = std::bool_constant<(std::is_integral<T>::value\
    \ &&\n                                          std::is_signed<T>::value) ||\n\
    \                                         std::is_same<T, i128_t>::value>;\n\n\
    template <class T>\nusing is_unsigned_int = std::bool_constant<(std::is_integral<T>::value\
    \ &&\n                                            std::is_unsigned<T>::value)\
    \ ||\n                                           std::is_same<T, u128_t>::value>;\n\
    \ntemplate <class T>\nusing is_int =\n    std::bool_constant<is_signed_int<T>::value\
    \ || is_unsigned_int<T>::value>;\n\ntemplate <size_t D>\nusing signed_int_least\
    \ = std::enable_if<\n    D <= 128,\n    typename std::conditional<\n        D\
    \ <= 8,\n        i8_t,\n        typename std::conditional<\n            D <= 16,\n\
    \            i16_t,\n            typename std::conditional<\n                D\
    \ <= 32,\n                i32_t,\n                typename std::conditional<D\
    \ <= 64, i64_t, i128_t>::type>::\n                type>::type>::type>;\n\ntemplate\
    \ <size_t D>\nusing unsigned_int_least = std::enable_if<\n    D <= 128,\n    typename\
    \ std::conditional<\n        D <= 8,\n        u8_t,\n        typename std::conditional<\n\
    \            D <= 16,\n            u16_t,\n            typename std::conditional<\n\
    \                D <= 32,\n                u32_t,\n                typename std::conditional<D\
    \ <= 64, u64_t, u128_t>::type>::\n                type>::type>::type>;\n};  //\
    \ namespace kgt\n#line 4 \"template/macros.hpp\"\n\n#include <iterator>\n\n#if\
    \ defined(DEBUG) && __has_include(<cpp-dump.hpp>)\n#include <cpp-dump.hpp>\n#define\
    \ dump(...) cpp_dump(__VA_ARGS__)\n#else\n#define dump(...) ((void)0)\n#endif\n\
    \n#define overload4(a, b, c, d, e, ...) e\n\n#define rep1(i, a) for (kgt::i64_t\
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
    #define all(a) std::begin(a), std::end(a)\n#define rall(a) std::rbegin(a), std::rend(a)\n"
  code: "#pragma once\n\n#include \"types.hpp\"\n\n#include <iterator>\n\n#if defined(DEBUG)\
    \ && __has_include(<cpp-dump.hpp>)\n#include <cpp-dump.hpp>\n#define dump(...)\
    \ cpp_dump(__VA_ARGS__)\n#else\n#define dump(...) ((void)0)\n#endif\n\n#define\
    \ overload4(a, b, c, d, e, ...) e\n\n#define rep1(i, a) for (kgt::i64_t i = 0;\
    \ i < static_cast<kgt::i64_t>(a); ++i)\n#define rep2(i, a, b)                \
    \               \\\n    for (kgt::i64_t i = static_cast<kgt::i64_t>(a); \\\n \
    \        i < static_cast<kgt::i64_t>(b); ++i)\n#define rep3(i, a, b, c)      \
    \                      \\\n    for (kgt::i64_t i = static_cast<kgt::i64_t>(a);\
    \ \\\n         i < static_cast<kgt::i64_t>(b); i += static_cast<kgt::i64_t>(c))\n\
    #define rep(...) overload4(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\n\n#define\
    \ rrep1(i, a) for (kgt::i64_t i = static_cast<kgt::i64_t>(a); i >= 0; --i)\n#define\
    \ rrep2(i, a, b)                              \\\n    for (kgt::i64_t i = static_cast<kgt::i64_t>(a);\
    \ \\\n         i >= static_cast<kgt::i64_t>(b); --i)\n#define rrep3(i, a, b, c)\
    \                           \\\n    for (kgt::i64_t i = static_cast<kgt::i64_t>(a);\
    \ \\\n         i >= static_cast<kgt::i64_t>(b); i -= static_cast<kgt::i64_t>(c))\n\
    #define rrep(...) overload4(__VA_ARGS__, rrep3, rrep2, rrep1)(__VA_ARGS__)\n\n\
    #define all(a) std::begin(a), std::end(a)\n#define rall(a) std::rbegin(a), std::rend(a)\n"
  dependsOn:
  - template/types.hpp
  isVerificationFile: false
  path: template/macros.hpp
  requiredBy:
  - template/template.hpp
  timestamp: '2024-12-16 17:45:11+09:00'
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
