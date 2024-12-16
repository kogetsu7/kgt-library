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
  bundledCode: "#line 2 \"template/types.hpp\"\n\n#include <cstddef>\n#include <cstdint>\n\
    #include <string>\n#include <type_traits>\n\n#if __has_include(<boost/multiprecision/cpp_int.hpp>)\n\
    #include <boost/multiprecision/cpp_int.hpp>\nnamespace kgt {\nusing iinf_t = boost::multiprecision::cpp_int;\n\
    };  // namespace kgt\n#endif\n\nnamespace kgt {\ntemplate <class T>\nusing is_signed_int\
    \ = std::bool_constant<(std::is_integral<T>::value &&\n                      \
    \                    std::is_signed<T>::value) ||\n                          \
    \               std::is_same<T, __int128_t>::value>;\n\ntemplate <class T>\nusing\
    \ is_unsigned_int = std::bool_constant<(std::is_integral<T>::value &&\n      \
    \                                      std::is_unsigned<T>::value) ||\n      \
    \                                     std::is_same<T, __uint128_t>::value>;\n\n\
    template <class T>\nusing is_int =\n    std::bool_constant<is_signed_int<T>::value\
    \ || is_unsigned_int<T>::value>;\n\nusing size_t = std::size_t;\n\ntemplate <size_t\
    \ D>\nusing signed_int_least = std::enable_if<\n    D <= 128,\n    typename std::conditional<\n\
    \        D <= 8,\n        std::int_least8_t,\n        typename std::conditional<\n\
    \            D <= 16,\n            std::int_least16_t,\n            typename std::conditional<\n\
    \                D <= 32,\n                std::int_least32_t,\n             \
    \   typename std::\n                    conditional<D <= 64, std::int_least64_t,\
    \ __int128_t>::\n                        type>::type>::type>::type>;\n\ntemplate\
    \ <size_t D>\nusing unsigned_int_least = std::enable_if<\n    D <= 128,\n    typename\
    \ std::conditional<\n        D <= 8,\n        std::uint_least8_t,\n        typename\
    \ std::conditional<\n            D <= 16,\n            std::uint_least16_t,\n\
    \            typename std::conditional<\n                D <= 32,\n          \
    \      std::uint_least32_t,\n                typename std::\n                \
    \    conditional<D <= 64, std::uint_least64_t, __uint128_t>::\n              \
    \          type>::type>::type>::type>;\n\nusing i8_t = typename signed_int_least<8>::type;\n\
    using i16_t = typename signed_int_least<16>::type;\nusing i32_t = typename signed_int_least<32>::type;\n\
    using i64_t = typename signed_int_least<64>::type;\nusing i128_t = typename signed_int_least<128>::type;\n\
    \nusing u8_t = typename unsigned_int_least<8>::type;\nusing u16_t = typename unsigned_int_least<16>::type;\n\
    using u32_t = typename unsigned_int_least<32>::type;\nusing u64_t = typename unsigned_int_least<64>::type;\n\
    using u128_t = typename unsigned_int_least<128>::type;\n};  // namespace kgt\n"
  code: "#pragma once\n\n#include <cstddef>\n#include <cstdint>\n#include <string>\n\
    #include <type_traits>\n\n#if __has_include(<boost/multiprecision/cpp_int.hpp>)\n\
    #include <boost/multiprecision/cpp_int.hpp>\nnamespace kgt {\nusing iinf_t = boost::multiprecision::cpp_int;\n\
    };  // namespace kgt\n#endif\n\nnamespace kgt {\ntemplate <class T>\nusing is_signed_int\
    \ = std::bool_constant<(std::is_integral<T>::value &&\n                      \
    \                    std::is_signed<T>::value) ||\n                          \
    \               std::is_same<T, __int128_t>::value>;\n\ntemplate <class T>\nusing\
    \ is_unsigned_int = std::bool_constant<(std::is_integral<T>::value &&\n      \
    \                                      std::is_unsigned<T>::value) ||\n      \
    \                                     std::is_same<T, __uint128_t>::value>;\n\n\
    template <class T>\nusing is_int =\n    std::bool_constant<is_signed_int<T>::value\
    \ || is_unsigned_int<T>::value>;\n\nusing size_t = std::size_t;\n\ntemplate <size_t\
    \ D>\nusing signed_int_least = std::enable_if<\n    D <= 128,\n    typename std::conditional<\n\
    \        D <= 8,\n        std::int_least8_t,\n        typename std::conditional<\n\
    \            D <= 16,\n            std::int_least16_t,\n            typename std::conditional<\n\
    \                D <= 32,\n                std::int_least32_t,\n             \
    \   typename std::\n                    conditional<D <= 64, std::int_least64_t,\
    \ __int128_t>::\n                        type>::type>::type>::type>;\n\ntemplate\
    \ <size_t D>\nusing unsigned_int_least = std::enable_if<\n    D <= 128,\n    typename\
    \ std::conditional<\n        D <= 8,\n        std::uint_least8_t,\n        typename\
    \ std::conditional<\n            D <= 16,\n            std::uint_least16_t,\n\
    \            typename std::conditional<\n                D <= 32,\n          \
    \      std::uint_least32_t,\n                typename std::\n                \
    \    conditional<D <= 64, std::uint_least64_t, __uint128_t>::\n              \
    \          type>::type>::type>::type>;\n\nusing i8_t = typename signed_int_least<8>::type;\n\
    using i16_t = typename signed_int_least<16>::type;\nusing i32_t = typename signed_int_least<32>::type;\n\
    using i64_t = typename signed_int_least<64>::type;\nusing i128_t = typename signed_int_least<128>::type;\n\
    \nusing u8_t = typename unsigned_int_least<8>::type;\nusing u16_t = typename unsigned_int_least<16>::type;\n\
    using u32_t = typename unsigned_int_least<32>::type;\nusing u64_t = typename unsigned_int_least<64>::type;\n\
    using u128_t = typename unsigned_int_least<128>::type;\n};  // namespace kgt\n"
  dependsOn: []
  isVerificationFile: false
  path: template/types.hpp
  requiredBy:
  - template/template.hpp
  - template/macros.hpp
  timestamp: '2024-12-16 16:30:22+09:00'
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
