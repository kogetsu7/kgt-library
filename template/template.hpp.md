---
data:
  _extendedDependsOn: []
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
  bundledCode: "#line 2 \"template/template.hpp\"\n/**\n * @author ku_senjan\n */\n\
    \n#if defined(DEBUG)\n#define _GLIBCXX_DEBUG\n#endif\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#if __has_include(<atcoder/all>)\n#include <atcoder/all>\n\
    using namespace atcoder;\n#endif\n\n#if defined(DEBUG) && __has_include(<cpp-dump.hpp>)\n\
    #include <cpp-dump.hpp>\n#define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#define\
    \ dump(...) ((void)0)\n#endif\n\n#if __has_include(<boost/multiprecision/cpp_int.hpp>)\n\
    #include <boost/multiprecision/cpp_int.hpp>\nusing boost::multiprecision::cpp_int;\n\
    #endif\n\nusing uint = unsigned;\nusing ll = long long;\nusing ull = unsigned\
    \ long long;\nusing i128 = __int128_t;\nusing u128 = __uint128_t;\nusing ld =\
    \ long double;\ntemplate <class T>\nusing min_priority_queue = priority_queue<T,\
    \ vector<T>, greater<T>>;\n\nconst ld PI = acos(-1);\nconstexpr int INF32 = INT_MAX\
    \ / 2;\nconstexpr ll INF64 = 1LL << 60;\nconstexpr array<int, 4> DX4 = {0, 1,\
    \ 0, -1};\nconstexpr array<int, 4> DY4 = {-1, 0, 1, 0};\nconstexpr array<int,\
    \ 8> DX8 = {0, 1, 1, 1, 0, -1, -1, -1};\nconstexpr array<int, 8> DY8 = {-1, -1,\
    \ 0, 1, 1, 1, 0, -1};\nconstexpr char LF = '\\n';\n\n#define overload4(a, b, c,\
    \ d, e, ...) e\n#define overload6(a, b, c, d, e, f, g, ...) g\n\n#define rep1(i,\
    \ a) for (ll i = 0; (i) < (ll)(a); ++(i))\n#define rep2(i, a, b) for (ll i = (ll)(a);\
    \ (i) < (ll)(b); ++(i))\n#define rep3(i, a, b, c) for (ll i = (ll)(a); (i) < (ll)(b);\
    \ (i) += (ll)(c))\n#define rep(...) overload4(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\n\
    \n#define rrep1(i, a) for (ll i = (ll)(a); (i) >= 0; --(i))\n#define rrep2(i,\
    \ a, b) for (ll i = (ll)(a); (i) >= (ll)(b); --(i))\n#define rrep3(i, a, b, c)\
    \ for (ll i = (ll)(a); (i) >= (ll)(b); (i) -= (ll)(c))\n#define rrep(...) overload4(__VA_ARGS__,\
    \ rrep3, rrep2, rrep1)(__VA_ARGS__)\n\n#define fore1(i, a) for (auto& i : (a))\n\
    #define fore2(i, j, a) for (auto& [i, j] : (a))\n#define fore3(i, j, k, a) for\
    \ (auto& [i, j, k] : (a))\n#define fore4(i, j, k, l, a) for (auto& [i, j, k, l]\
    \ : (a))\n#define fore5(i, j, k, l, m, a) for (auto& [i, j, k, l, m] : (a))\n\
    #define fore(...) \\\n    overload6(__VA_ARGS__, fore5, fore4, fore3, fore2, fore1)(__VA_ARGS__)\n\
    \n#define all(a) (a).begin(), (a).end()\n#define rall(a) (a).rbegin(), (a).rend()\n\
    \ntemplate <class T> bool chmin(T& a, const T& b) {\n    return (a > b) ? (a =\
    \ b, true) : false;\n}\ntemplate <class T> bool chmax(T& a, const T& b) {\n  \
    \  return (a < b) ? (a = b, true) : false;\n}\n\nstring yes(const bool a) { return\
    \ a ? \"yes\" : \"no\"; }\nstring Yes(const bool a) { return a ? \"Yes\" : \"\
    No\"; }\nstring YES(const bool a) { return a ? \"YES\" : \"NO\"; }\n"
  code: "#pragma once\n/**\n * @author ku_senjan\n */\n\n#if defined(DEBUG)\n#define\
    \ _GLIBCXX_DEBUG\n#endif\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n\
    #if __has_include(<atcoder/all>)\n#include <atcoder/all>\nusing namespace atcoder;\n\
    #endif\n\n#if defined(DEBUG) && __has_include(<cpp-dump.hpp>)\n#include <cpp-dump.hpp>\n\
    #define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#define dump(...) ((void)0)\n\
    #endif\n\n#if __has_include(<boost/multiprecision/cpp_int.hpp>)\n#include <boost/multiprecision/cpp_int.hpp>\n\
    using boost::multiprecision::cpp_int;\n#endif\n\nusing uint = unsigned;\nusing\
    \ ll = long long;\nusing ull = unsigned long long;\nusing i128 = __int128_t;\n\
    using u128 = __uint128_t;\nusing ld = long double;\ntemplate <class T>\nusing\
    \ min_priority_queue = priority_queue<T, vector<T>, greater<T>>;\n\nconst ld PI\
    \ = acos(-1);\nconstexpr int INF32 = INT_MAX / 2;\nconstexpr ll INF64 = 1LL <<\
    \ 60;\nconstexpr array<int, 4> DX4 = {0, 1, 0, -1};\nconstexpr array<int, 4> DY4\
    \ = {-1, 0, 1, 0};\nconstexpr array<int, 8> DX8 = {0, 1, 1, 1, 0, -1, -1, -1};\n\
    constexpr array<int, 8> DY8 = {-1, -1, 0, 1, 1, 1, 0, -1};\nconstexpr char LF\
    \ = '\\n';\n\n#define overload4(a, b, c, d, e, ...) e\n#define overload6(a, b,\
    \ c, d, e, f, g, ...) g\n\n#define rep1(i, a) for (ll i = 0; (i) < (ll)(a); ++(i))\n\
    #define rep2(i, a, b) for (ll i = (ll)(a); (i) < (ll)(b); ++(i))\n#define rep3(i,\
    \ a, b, c) for (ll i = (ll)(a); (i) < (ll)(b); (i) += (ll)(c))\n#define rep(...)\
    \ overload4(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\n\n#define rrep1(i, a)\
    \ for (ll i = (ll)(a); (i) >= 0; --(i))\n#define rrep2(i, a, b) for (ll i = (ll)(a);\
    \ (i) >= (ll)(b); --(i))\n#define rrep3(i, a, b, c) for (ll i = (ll)(a); (i) >=\
    \ (ll)(b); (i) -= (ll)(c))\n#define rrep(...) overload4(__VA_ARGS__, rrep3, rrep2,\
    \ rrep1)(__VA_ARGS__)\n\n#define fore1(i, a) for (auto& i : (a))\n#define fore2(i,\
    \ j, a) for (auto& [i, j] : (a))\n#define fore3(i, j, k, a) for (auto& [i, j,\
    \ k] : (a))\n#define fore4(i, j, k, l, a) for (auto& [i, j, k, l] : (a))\n#define\
    \ fore5(i, j, k, l, m, a) for (auto& [i, j, k, l, m] : (a))\n#define fore(...)\
    \ \\\n    overload6(__VA_ARGS__, fore5, fore4, fore3, fore2, fore1)(__VA_ARGS__)\n\
    \n#define all(a) (a).begin(), (a).end()\n#define rall(a) (a).rbegin(), (a).rend()\n\
    \ntemplate <class T> bool chmin(T& a, const T& b) {\n    return (a > b) ? (a =\
    \ b, true) : false;\n}\ntemplate <class T> bool chmax(T& a, const T& b) {\n  \
    \  return (a < b) ? (a = b, true) : false;\n}\n\nstring yes(const bool a) { return\
    \ a ? \"yes\" : \"no\"; }\nstring Yes(const bool a) { return a ? \"Yes\" : \"\
    No\"; }\nstring YES(const bool a) { return a ? \"YES\" : \"NO\"; }\n"
  dependsOn: []
  isVerificationFile: false
  path: template/template.hpp
  requiredBy: []
  timestamp: '2024-12-16 19:18:15+09:00'
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
