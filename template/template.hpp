#pragma once
/**
 * @author ku_senjan
 */

#if defined(DEBUG)
#define _GLIBCXX_DEBUG
#endif

#include <bits/stdc++.h>
using namespace std;

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

#if defined(DEBUG) && __has_include(<cpp-dump.hpp>)
#include <cpp-dump.hpp>
#define dump(...) cpp_dump(__VA_ARGS__)
#else
#define dump(...) ((void)0)
#endif

#if __has_include(<boost/multiprecision/cpp_int.hpp>)
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
#endif

using uint = unsigned;
using ll = long long;
using ull = unsigned long long;
using i128 = __int128_t;
using u128 = __uint128_t;
using ld = long double;
template <class T>
using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;

const ld PI = acos(-1);
constexpr int INF32 = INT_MAX / 2;
constexpr ll INF64 = 1LL << 60;
constexpr array<int, 4> DX4 = {0, 1, 0, -1};
constexpr array<int, 4> DY4 = {-1, 0, 1, 0};
constexpr array<int, 8> DX8 = {0, 1, 1, 1, 0, -1, -1, -1};
constexpr array<int, 8> DY8 = {-1, -1, 0, 1, 1, 1, 0, -1};
constexpr char LF = '\n';

#define overload4(a, b, c, d, e, ...) e
#define overload6(a, b, c, d, e, f, g, ...) g

#define rep1(i, a) for (ll i = 0; (i) < (ll)(a); ++(i))
#define rep2(i, a, b) for (ll i = (ll)(a); (i) < (ll)(b); ++(i))
#define rep3(i, a, b, c) for (ll i = (ll)(a); (i) < (ll)(b); (i) += (ll)(c))
#define rep(...) overload4(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)

#define rrep1(i, a) for (ll i = (ll)(a); (i) >= 0; --(i))
#define rrep2(i, a, b) for (ll i = (ll)(a); (i) >= (ll)(b); --(i))
#define rrep3(i, a, b, c) for (ll i = (ll)(a); (i) >= (ll)(b); (i) -= (ll)(c))
#define rrep(...) overload4(__VA_ARGS__, rrep3, rrep2, rrep1)(__VA_ARGS__)

#define fore1(i, a) for (auto& i : (a))
#define fore2(i, j, a) for (auto& [i, j] : (a))
#define fore3(i, j, k, a) for (auto& [i, j, k] : (a))
#define fore4(i, j, k, l, a) for (auto& [i, j, k, l] : (a))
#define fore5(i, j, k, l, m, a) for (auto& [i, j, k, l, m] : (a))
#define fore(...) \
    overload6(__VA_ARGS__, fore5, fore4, fore3, fore2, fore1)(__VA_ARGS__)

#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

template <class T> bool chmin(T& a, const T& b) {
    return (a > b) ? (a = b, true) : false;
}
template <class T> bool chmax(T& a, const T& b) {
    return (a < b) ? (a = b, true) : false;
}

string yes(const bool a) { return a ? "yes" : "no"; }
string Yes(const bool a) { return a ? "Yes" : "No"; }
string YES(const bool a) { return a ? "YES" : "NO"; }
