---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/math/prime_sieve.test.cpp
    title: test/math/prime_sieve.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    document_title: "Prime Sieve (\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\
      \u7BE9)"
    links: []
  bundledCode: "#line 2 \"math/prime_sieve.hpp\"\n\n#include <algorithm>\n#include\
    \ <array>\n#include <cassert>\n#include <utility>\n#include <vector>\n\nnamespace\
    \ ku {\n/**\n * @brief Prime Sieve (\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\
    \u306E\u7BE9)\n */\nclass PrimeSieve {\n  private:\n    std::vector<unsigned>\
    \ d;\n    std::vector<unsigned> p;\n\n  public:\n    PrimeSieve() noexcept : PrimeSieve(0)\
    \ {}\n    PrimeSieve(const size_t _n) noexcept : d(_n + 1), p() {\n        for\
    \ (unsigned i = 2; i <= static_cast<unsigned>(_n); i++) {\n            if (d[i]\
    \ != 0) {\n                continue;\n            }\n\n            d[i] = i;\n\
    \            p.push_back(i);\n\n            for (unsigned long long j = static_cast<unsigned\
    \ long long>(i) * i;\n                 j <= static_cast<unsigned long long>(_n);\
    \ j += i) {\n                if (d[j] != 0) {\n                    continue;\n\
    \                }\n\n                d[j] = i;\n            }\n        }\n  \
    \  }\n\n    bool is_prime(const size_t n) const noexcept {\n        assert(n <\
    \ d.size());\n\n        return (n < 2) ? false : (d[n] == n);\n    }\n\n    const\
    \ std::vector<unsigned>& get_primes() const noexcept { return p; }\n\n    std::vector<std::pair<unsigned,\
    \ unsigned>> prime_factors(\n        size_t n) const noexcept {\n        assert(n\
    \ < d.size());\n\n        std::vector<std::pair<unsigned, unsigned>> res;\n\n\
    \        while (2 <= n) {\n            if (res.empty() || res.back().first !=\
    \ d[n]) {\n                res.emplace_back(static_cast<unsigned>(d[n]), 1U);\n\
    \            } else {\n                res.back().second++;\n            }\n\n\
    \            n /= d[n];\n        }\n\n        return res;\n    }\n\n    std::vector<unsigned>\
    \ divisors(const size_t n) const noexcept {\n        assert(n < d.size());\n\n\
    \        std::vector<unsigned> res;\n        res.emplace_back(1U);\n\n       \
    \ const auto pf = prime_factors(n);\n\n        for (const auto& te : pf) {\n \
    \           const size_t s = res.size();\n\n            for (size_t i = 0; i <\
    \ s; i++) {\n                unsigned m = 1U;\n\n                for (unsigned\
    \ j = 0; j < te.second; j++) {\n                    m *= te.first;\n         \
    \           res.emplace_back(res[i] * m);\n                }\n            }\n\
    \        }\n\n        std::sort(res.begin(), res.end());\n\n        return res;\n\
    \    }\n};\n};  // namespace ku\n"
  code: "#pragma once\n\n#include <algorithm>\n#include <array>\n#include <cassert>\n\
    #include <utility>\n#include <vector>\n\nnamespace ku {\n/**\n * @brief Prime\
    \ Sieve (\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\u7BE9)\n */\nclass PrimeSieve\
    \ {\n  private:\n    std::vector<unsigned> d;\n    std::vector<unsigned> p;\n\n\
    \  public:\n    PrimeSieve() noexcept : PrimeSieve(0) {}\n    PrimeSieve(const\
    \ size_t _n) noexcept : d(_n + 1), p() {\n        for (unsigned i = 2; i <= static_cast<unsigned>(_n);\
    \ i++) {\n            if (d[i] != 0) {\n                continue;\n          \
    \  }\n\n            d[i] = i;\n            p.push_back(i);\n\n            for\
    \ (unsigned long long j = static_cast<unsigned long long>(i) * i;\n          \
    \       j <= static_cast<unsigned long long>(_n); j += i) {\n                if\
    \ (d[j] != 0) {\n                    continue;\n                }\n\n        \
    \        d[j] = i;\n            }\n        }\n    }\n\n    bool is_prime(const\
    \ size_t n) const noexcept {\n        assert(n < d.size());\n\n        return\
    \ (n < 2) ? false : (d[n] == n);\n    }\n\n    const std::vector<unsigned>& get_primes()\
    \ const noexcept { return p; }\n\n    std::vector<std::pair<unsigned, unsigned>>\
    \ prime_factors(\n        size_t n) const noexcept {\n        assert(n < d.size());\n\
    \n        std::vector<std::pair<unsigned, unsigned>> res;\n\n        while (2\
    \ <= n) {\n            if (res.empty() || res.back().first != d[n]) {\n      \
    \          res.emplace_back(static_cast<unsigned>(d[n]), 1U);\n            } else\
    \ {\n                res.back().second++;\n            }\n\n            n /= d[n];\n\
    \        }\n\n        return res;\n    }\n\n    std::vector<unsigned> divisors(const\
    \ size_t n) const noexcept {\n        assert(n < d.size());\n\n        std::vector<unsigned>\
    \ res;\n        res.emplace_back(1U);\n\n        const auto pf = prime_factors(n);\n\
    \n        for (const auto& te : pf) {\n            const size_t s = res.size();\n\
    \n            for (size_t i = 0; i < s; i++) {\n                unsigned m = 1U;\n\
    \n                for (unsigned j = 0; j < te.second; j++) {\n               \
    \     m *= te.first;\n                    res.emplace_back(res[i] * m);\n    \
    \            }\n            }\n        }\n\n        std::sort(res.begin(), res.end());\n\
    \n        return res;\n    }\n};\n};  // namespace ku\n"
  dependsOn: []
  isVerificationFile: false
  path: math/prime_sieve.hpp
  requiredBy: []
  timestamp: '2024-12-15 14:14:20+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/math/prime_sieve.test.cpp
documentation_of: math/prime_sieve.hpp
layout: document
redirect_from:
- /library/math/prime_sieve.hpp
- /library/math/prime_sieve.hpp.html
title: "Prime Sieve (\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\u7BE9)"
---
