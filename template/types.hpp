#pragma once

#include <complex>
#include <cstddef>
#include <cstdint>
#include <string>
#include <type_traits>

#if __has_include(<boost/multiprecision/cpp_int.hpp>)
#include <boost/multiprecision/cpp_int.hpp>
namespace kgt {
using iinf_t = boost::multiprecision::cpp_int;
};  // namespace kgt
#endif

namespace kgt {
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

using size_t = std::size_t;

using real_t = long double;
using complex_t = std::complex<real_t>;

template <class T>
using is_signed_int = std::bool_constant<(std::is_integral<T>::value &&
                                          std::is_signed<T>::value) ||
                                         std::is_same<T, i128_t>::value>;

template <class T>
using is_unsigned_int = std::bool_constant<(std::is_integral<T>::value &&
                                            std::is_unsigned<T>::value) ||
                                           std::is_same<T, u128_t>::value>;

template <class T>
using is_int =
    std::bool_constant<is_signed_int<T>::value || is_unsigned_int<T>::value>;

template <size_t D>
using signed_int_least = std::enable_if<
    D <= 128,
    typename std::conditional<
        D <= 8,
        i8_t,
        typename std::conditional<
            D <= 16,
            i16_t,
            typename std::conditional<
                D <= 32,
                i32_t,
                typename std::conditional<D <= 64, i64_t, i128_t>::type>::
                type>::type>::type>;

template <size_t D>
using unsigned_int_least = std::enable_if<
    D <= 128,
    typename std::conditional<
        D <= 8,
        u8_t,
        typename std::conditional<
            D <= 16,
            u16_t,
            typename std::conditional<
                D <= 32,
                u32_t,
                typename std::conditional<D <= 64, u64_t, u128_t>::type>::
                type>::type>::type>;
};  // namespace kgt
