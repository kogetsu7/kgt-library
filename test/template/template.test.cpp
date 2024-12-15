#define PROBLEM \
    "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A"

#include "../../template/template.hpp"

int main() {
    i64_t s = 0;

    s = 0;
    rep(i, 10) { s += i; }
    assert(s == 45);

    s = 0;
    rep(i, 0, 10) { s += i; }
    assert(s == 45);

    s = 0;
    rep(i, 0, 10, 1) { s += i; }
    assert(s == 45);

    s = 0;
    rrep(i, 9) { s += i; }
    assert(s == 45);

    s = 0;
    rrep(i, 9, 0) { s += i; }
    assert(s == 45);

    s = 0;
    rrep(i, 9, 0, 1) { s += i; }
    assert(s == 45);

    cout << "Hello World"
         << "\n";

    return 0;
}
