#pragma once

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
template <class T>
using is_signed_int = std::bool_constant<(std::is_integral<T>::value &&
                                          std::is_signed<T>::value) ||
                                         std::is_same<T, __int128_t>::value>;

template <class T>
using is_unsigned_int = std::bool_constant<(std::is_integral<T>::value &&
                                            std::is_unsigned<T>::value) ||
                                           std::is_same<T, __uint128_t>::value>;

template <class T>
using is_int =
    std::bool_constant<is_signed_int<T>::value || is_unsigned_int<T>::value>;

using size_t = std::size_t;

template <size_t D>
using signed_int_least = std::enable_if<
    D <= 128,
    typename std::conditional<
        D <= 8,
        std::int_least8_t,
        typename std::conditional<
            D <= 16,
            std::int_least16_t,
            typename std::conditional<
                D <= 32,
                std::int_least32_t,
                typename std::
                    conditional<D <= 64, std::int_least64_t, __int128_t>::
                        type>::type>::type>::type>;

template <size_t D>
using unsigned_int_least = std::enable_if<
    D <= 128,
    typename std::conditional<
        D <= 8,
        std::uint_least8_t,
        typename std::conditional<
            D <= 16,
            std::uint_least16_t,
            typename std::conditional<
                D <= 32,
                std::uint_least32_t,
                typename std::
                    conditional<D <= 64, std::uint_least64_t, __uint128_t>::
                        type>::type>::type>::type>;

using i8_t = typename signed_int_least<8>::type;
using i16_t = typename signed_int_least<16>::type;
using i32_t = typename signed_int_least<32>::type;
using i64_t = typename signed_int_least<64>::type;
using i128_t = typename signed_int_least<128>::type;

using u8_t = typename unsigned_int_least<8>::type;
using u16_t = typename unsigned_int_least<16>::type;
using u32_t = typename unsigned_int_least<32>::type;
using u64_t = typename unsigned_int_least<64>::type;
using u128_t = typename unsigned_int_least<128>::type;
};  // namespace kgt
