---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: template/template.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/template/template.test.cpp
    title: verify/template/template.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: '#line 2 "template/includes.hpp"


    #if defined(DEBUG)

    #define _GLIBCXX_DEBUG

    #endif


    #include <bits/stdc++.h>

    using namespace std;


    #if __has_include(<atcoder/all>)

    #include <atcoder/all>

    using namespace atcoder;

    #endif

    '
  code: '#pragma once


    #if defined(DEBUG)

    #define _GLIBCXX_DEBUG

    #endif


    #include <bits/stdc++.h>

    using namespace std;


    #if __has_include(<atcoder/all>)

    #include <atcoder/all>

    using namespace atcoder;

    #endif

    '
  dependsOn: []
  isVerificationFile: false
  path: template/includes.hpp
  requiredBy:
  - template/template.hpp
  timestamp: '2024-12-15 14:14:20+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/template/template.test.cpp
documentation_of: template/includes.hpp
layout: document
redirect_from:
- /library/template/includes.hpp
- /library/template/includes.hpp.html
title: template/includes.hpp
---
