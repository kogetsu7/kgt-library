#pragma once

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

using str = std::string;
};  // namespace ku