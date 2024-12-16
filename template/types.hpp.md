---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: template/macros.hpp
    title: template/macros.hpp
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
  bundledCode: "#line 2 \"template/types.hpp\"\n\n#include <cstdint>\n#include <string>\n\
    \n#if __has_include(<boost/multiprecision/cpp_int.hpp>)\n#include <boost/multiprecision/cpp_int.hpp>\n\
    namespace kgt {\nusing iinf_t = boost::multiprecision::cpp_int;\n};  // namespace\
    \ kgt\n#endif\n\nnamespace kgt {\nusing i8_t = std::int_least8_t;\nusing i16_t\
    \ = std::int_least16_t;\nusing i32_t = std::int_least32_t;\nusing i64_t = std::int_least64_t;\n\
    using i128_t = __int128_t;\n\nusing u8_t = std::uint_least8_t;\nusing u16_t =\
    \ std::uint_least16_t;\nusing u32_t = std::uint_least32_t;\nusing u64_t = std::uint_least64_t;\n\
    \  using u128_t = __uint128_t;\n};  // namespace kgt\n"
  code: "#pragma once\n\n#include <cstdint>\n#include <string>\n\n#if __has_include(<boost/multiprecision/cpp_int.hpp>)\n\
    #include <boost/multiprecision/cpp_int.hpp>\nnamespace kgt {\nusing iinf_t = boost::multiprecision::cpp_int;\n\
    };  // namespace kgt\n#endif\n\nnamespace kgt {\nusing i8_t = std::int_least8_t;\n\
    using i16_t = std::int_least16_t;\nusing i32_t = std::int_least32_t;\nusing i64_t\
    \ = std::int_least64_t;\nusing i128_t = __int128_t;\n\nusing u8_t = std::uint_least8_t;\n\
    using u16_t = std::uint_least16_t;\nusing u32_t = std::uint_least32_t;\nusing\
    \ u64_t = std::uint_least64_t;\n  using u128_t = __uint128_t;\n};  // namespace\
    \ kgt\n"
  dependsOn: []
  isVerificationFile: false
  path: template/types.hpp
  requiredBy:
  - template/template.hpp
  - template/macros.hpp
  timestamp: '2024-12-16 15:57:44+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/template/template.test.cpp
documentation_of: template/types.hpp
layout: document
redirect_from:
- /library/template/types.hpp
- /library/template/types.hpp.html
title: template/types.hpp
---
