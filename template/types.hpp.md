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
  bundledCode: '#line 2 "template/types.hpp"


    #include <cstdint>

    #include <string>


    #if __has_include(<boost/multiprecision/cpp_int.hpp>)

    #include <boost/multiprecision/cpp_int.hpp>

    namespace ku {

    using iinf_t = boost::multiprecision::cpp_int;

    };  // namespace ku

    #endif


    namespace ku {

    using i8_t = std::int_least8_t;

    using i16_t = std::int_least16_t;

    using i32_t = std::int_least32_t;

    using i64_t = std::int_least64_t;

    using i128_t = __int128_t;


    using u8_t = std::uint_least8_t;

    using u16_t = std::uint_least16_t;

    using u32_t = std::uint_least32_t;

    using u64_t = std::uint_least64_t;

    using u128_t = __uint128_t;

    };  // namespace ku

    '
  code: '#pragma once


    #include <cstdint>

    #include <string>


    #if __has_include(<boost/multiprecision/cpp_int.hpp>)

    #include <boost/multiprecision/cpp_int.hpp>

    namespace ku {

    using iinf_t = boost::multiprecision::cpp_int;

    };  // namespace ku

    #endif


    namespace ku {

    using i8_t = std::int_least8_t;

    using i16_t = std::int_least16_t;

    using i32_t = std::int_least32_t;

    using i64_t = std::int_least64_t;

    using i128_t = __int128_t;


    using u8_t = std::uint_least8_t;

    using u16_t = std::uint_least16_t;

    using u32_t = std::uint_least32_t;

    using u64_t = std::uint_least64_t;

    using u128_t = __uint128_t;

    };  // namespace ku

    '
  dependsOn: []
  isVerificationFile: false
  path: template/types.hpp
  requiredBy:
  - template/template.hpp
  - template/macros.hpp
  timestamp: '2024-12-15 11:19:23+00:00'
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
