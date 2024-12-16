#pragma once

#include "types.hpp"

#include <iterator>

#if defined(DEBUG) && __has_include(<cpp-dump.hpp>)
#include <cpp-dump.hpp>
#define dump(...) cpp_dump(__VA_ARGS__)
#else
#define dump(...) ((void)0)
#endif

#define overload4(a, b, c, d, e, ...) e

#define rep1(i, a) for (kgt::i64_t i = 0; i < static_cast<kgt::i64_t>(a); ++i)
#define rep2(i, a, b)                               \
    for (kgt::i64_t i = static_cast<kgt::i64_t>(a); \
         i < static_cast<kgt::i64_t>(b); ++i)
#define rep3(i, a, b, c)                            \
    for (kgt::i64_t i = static_cast<kgt::i64_t>(a); \
         i < static_cast<kgt::i64_t>(b); i += static_cast<kgt::i64_t>(c))
#define rep(...) overload4(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)

#define rrep1(i, a) for (kgt::i64_t i = static_cast<kgt::i64_t>(a); i >= 0; --i)
#define rrep2(i, a, b)                              \
    for (kgt::i64_t i = static_cast<kgt::i64_t>(a); \
         i >= static_cast<kgt::i64_t>(b); --i)
#define rrep3(i, a, b, c)                           \
    for (kgt::i64_t i = static_cast<kgt::i64_t>(a); \
         i >= static_cast<kgt::i64_t>(b); i -= static_cast<kgt::i64_t>(c))
#define rrep(...) overload4(__VA_ARGS__, rrep3, rrep2, rrep1)(__VA_ARGS__)

#define all(a) std::begin(a), std::end(a)
#define rall(a) std::rbegin(a), std::rend(a)
