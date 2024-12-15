---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/topological_sort.hpp
    title: "Topological Sort (\u30C8\u30DD\u30ED\u30B8\u30AB\u30EB\u30BD\u30FC\u30C8\
      )"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_4_A
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_4_A
  bundledCode: "#line 1 \"verify/graph/topological_sort.is_dag.test.cpp\"\n#define\
    \ PROBLEM \\\n    \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_4_A\"\
    \n\n#line 2 \"graph/topological_sort.hpp\"\n\n#include <cassert>\n#include <queue>\n\
    #include <vector>\n\nnamespace ku {\n/**\n * @brief Topological Sort (\u30C8\u30DD\
    \u30ED\u30B8\u30AB\u30EB\u30BD\u30FC\u30C8)\n */\nclass TopologicalSort {\n  private:\n\
    \    bool init;\n    bool dag;\n    size_t n;\n    std::vector<std::vector<int>>\
    \ g;\n    std::vector<int> p;\n\n  public:\n    TopologicalSort() noexcept : TopologicalSort(0)\
    \ {}\n    explicit TopologicalSort(const size_t _n) noexcept\n        : init(false),\
    \ dag(false), n(_n), g(_n), p() {}\n    explicit TopologicalSort(const std::vector<std::vector<int>>&\
    \ _g) noexcept\n        : init(false), dag(false), n(_g.size()), g(_g), p() {\n\
    \        build();\n    }\n\n    void add_edge(const int u, const int v) noexcept\
    \ {\n        assert(!init);\n        assert(0 <= u);\n        assert(u < static_cast<int>(n));\n\
    \        assert(0 <= v);\n        assert(v < static_cast<int>(n));\n\n       \
    \ g[u].push_back(v);\n    }\n\n    void build() noexcept {\n        assert(!init);\n\
    \        init = true;\n\n        std::vector<int> cnt(n);\n        for (size_t\
    \ v = 0; v < n; v++) {\n            for (int nv : g[v]) {\n                cnt[nv]++;\n\
    \            }\n        }\n\n        std::queue<int> que;\n        for (size_t\
    \ v = 0; v < n; v++) {\n            if (cnt[v] == 0) {\n                que.push(static_cast<int>(v));\n\
    \            }\n        }\n\n        while (!que.empty()) {\n            const\
    \ auto v = que.front();\n            que.pop();\n            p.push_back(v);\n\
    \            for (const auto nv : g[v]) {\n                cnt[nv]--;\n      \
    \          if (cnt[nv] == 0) {\n                    que.push(nv);\n          \
    \      }\n            }\n        }\n\n        dag = (n == p.size());\n\n     \
    \   if (!dag) {\n            p.clear();\n        }\n\n        return;\n    }\n\
    \n    bool is_dag() const noexcept {\n        assert(init);\n\n        return\
    \ dag;\n    }\n\n    int get(const size_t i) const noexcept {\n        assert(init);\n\
    \        assert(dag);\n        assert(i < n);\n\n        return p[i];\n    }\n\
    };\n};  // namespace ku\n#line 5 \"verify/graph/topological_sort.is_dag.test.cpp\"\
    \n\n#include <iostream>\n\nint main() {\n    int N, M;\n    std::cin >> N >> M;\n\
    \n    ku::TopologicalSort ts(N);\n    for (int i = 0; i < M; i++) {\n        int\
    \ u, v;\n        std::cin >> u >> v;\n        ts.add_edge(u, v);\n    }\n\n  \
    \  ts.build();\n\n    std::cout << (ts.is_dag() ? 0 : 1) << \"\\n\";\n\n    return\
    \ 0;\n}\n"
  code: "#define PROBLEM \\\n    \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_4_A\"\
    \n\n#include \"../../graph/topological_sort.hpp\"\n\n#include <iostream>\n\nint\
    \ main() {\n    int N, M;\n    std::cin >> N >> M;\n\n    ku::TopologicalSort\
    \ ts(N);\n    for (int i = 0; i < M; i++) {\n        int u, v;\n        std::cin\
    \ >> u >> v;\n        ts.add_edge(u, v);\n    }\n\n    ts.build();\n\n    std::cout\
    \ << (ts.is_dag() ? 0 : 1) << \"\\n\";\n\n    return 0;\n}\n"
  dependsOn:
  - graph/topological_sort.hpp
  isVerificationFile: true
  path: verify/graph/topological_sort.is_dag.test.cpp
  requiredBy: []
  timestamp: '2024-12-15 15:13:21+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/graph/topological_sort.is_dag.test.cpp
layout: document
redirect_from:
- /verify/verify/graph/topological_sort.is_dag.test.cpp
- /verify/verify/graph/topological_sort.is_dag.test.cpp.html
title: verify/graph/topological_sort.is_dag.test.cpp
---
