---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: math/extended_gcd.hpp
    title: "Extended Euclidean Algorithm (\u62E1\u5F35\u30E6\u30FC\u30AF\u30EA\u30C3\
      \u30C9\u306E\u4E92\u9664\u6CD5)"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_E
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_E
  bundledCode: "#line 1 \"test/math/extended_gcd.test.cpp\"\n#define PROBLEM \\\n\
    \    \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_E\"\n\n\
    #line 2 \"math/extended_gcd.hpp\"\n\n#include <type_traits>\n\nnamespace ku {\n\
    /**\n * @brief Extended Euclidean Algorithm (\u62E1\u5F35\u30E6\u30FC\u30AF\u30EA\
    \u30C3\u30C9\u306E\u4E92\u9664\u6CD5)\n * @note \u53C2\u8003: https://qiita.com/drken/items/b97ff231e43bce50199a\n\
    \ */\ntemplate <class T> T ExtendedGCD(T a, T b, T& x, T& y) {\n    static_assert(!std::is_floating_point_v<T>,\
    \ \"T must not be floating point\");\n\n    if (b == T(0)) {\n        x = T(1);\n\
    \        y = T(0);\n\n        return a;\n    }\n\n    T res = ExtendedGCD(b, a\
    \ % b, y, x);\n    y -= (a / b) * x;\n\n    return res;\n}\n};  // namespace ku\n\
    #line 5 \"test/math/extended_gcd.test.cpp\"\n\n#include <iostream>\n\nint main()\
    \ {\n    long long a, b;\n    std::cin >> a >> b;\n\n    long long x, y;\n   \
    \ ku::ExtendedGCD(a, b, x, y);\n\n    std::cout << x << \" \" << y << \"\\n\"\
    ;\n\n    return 0;\n}\n"
  code: "#define PROBLEM \\\n    \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_E\"\
    \n\n#include \"../../math/extended_gcd.hpp\"\n\n#include <iostream>\n\nint main()\
    \ {\n    long long a, b;\n    std::cin >> a >> b;\n\n    long long x, y;\n   \
    \ ku::ExtendedGCD(a, b, x, y);\n\n    std::cout << x << \" \" << y << \"\\n\"\
    ;\n\n    return 0;\n}\n"
  dependsOn:
  - math/extended_gcd.hpp
  isVerificationFile: true
  path: test/math/extended_gcd.test.cpp
  requiredBy: []
  timestamp: '2024-12-15 14:14:20+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/math/extended_gcd.test.cpp
layout: document
redirect_from:
- /verify/test/math/extended_gcd.test.cpp
- /verify/test/math/extended_gcd.test.cpp.html
title: test/math/extended_gcd.test.cpp
---
