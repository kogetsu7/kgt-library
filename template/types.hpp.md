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
  bundledCode: "#line 2 \"template/types.hpp\"\n\n#include <complex>\n#include <cstddef>\n\
    #include <cstdint>\n#include <string>\n#include <type_traits>\n\n#if __has_include(<boost/multiprecision/cpp_int.hpp>)\n\
    #include <boost/multiprecision/cpp_int.hpp>\nnamespace kgt {\nusing iinf_t = boost::multiprecision::cpp_int;\n\
    };  // namespace kgt\n#endif\n\nnamespace kgt {\nusing i8_t = std::int_least8_t;\n\
    using i16_t = std::int_least16_t;\nusing i32_t = std::int_least32_t;\nusing i64_t\
    \ = std::int_least64_t;\nusing i128_t = __int128_t;\n\nusing u8_t = std::uint_least8_t;\n\
    using u16_t = std::uint_least16_t;\nusing u32_t = std::uint_least32_t;\nusing\
    \ u64_t = std::uint_least64_t;\nusing u128_t = __uint128_t;\n\nusing size_t =\
    \ std::size_t;\n\nusing real_t = long double;\nusing complex_t = std::complex<real_t>;\n\
    \ntemplate <class T>\nusing is_signed_int = std::bool_constant<(std::is_integral<T>::value\
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
    \ namespace kgt\n"
  code: "#pragma once\n\n#include <complex>\n#include <cstddef>\n#include <cstdint>\n\
    #include <string>\n#include <type_traits>\n\n#if __has_include(<boost/multiprecision/cpp_int.hpp>)\n\
    #include <boost/multiprecision/cpp_int.hpp>\nnamespace kgt {\nusing iinf_t = boost::multiprecision::cpp_int;\n\
    };  // namespace kgt\n#endif\n\nnamespace kgt {\nusing i8_t = std::int_least8_t;\n\
    using i16_t = std::int_least16_t;\nusing i32_t = std::int_least32_t;\nusing i64_t\
    \ = std::int_least64_t;\nusing i128_t = __int128_t;\n\nusing u8_t = std::uint_least8_t;\n\
    using u16_t = std::uint_least16_t;\nusing u32_t = std::uint_least32_t;\nusing\
    \ u64_t = std::uint_least64_t;\nusing u128_t = __uint128_t;\n\nusing size_t =\
    \ std::size_t;\n\nusing real_t = long double;\nusing complex_t = std::complex<real_t>;\n\
    \ntemplate <class T>\nusing is_signed_int = std::bool_constant<(std::is_integral<T>::value\
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
    \ namespace kgt\n"
  dependsOn: []
  isVerificationFile: false
  path: template/types.hpp
  requiredBy:
  - template/template.hpp
  - template/macros.hpp
  timestamp: '2024-12-16 16:56:22+09:00'
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
