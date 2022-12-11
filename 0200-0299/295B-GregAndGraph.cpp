#include <cstdio>
#include <iostream>
#include <vector>

int main() {

    int64_t n; scanf("%lld", &n);
    std::vector<std::vector<int64_t> > a(n + 1, std::vector<int64_t>(n + 1, 0));
    std::vector<int64_t> x(n + 1);
    std::vector<int64_t> ans(n + 1);

    for (int64_t p = 1; p <= n; p++){for (int64_t q = 1; q <= n; q++){scanf("%lld", &a[p][q]);}}
    for (int64_t p = 1; p <= n; p++){scanf("%lld", &x[p]);}

    for (int64_t k = n; k >= 1; k--) {
        for (int64_t p = 1; p <= n; p++) {
            for (int64_t q = 1; q <= n; q++) {
                int64_t test = a[p][x[k]] + a[x[k]][q];
                a[p][q] = (a[p][q] < test) ? a[p][q] : test;
            }
        }

        for (int64_t p = k; p <= n; p++){for(int64_t q = k; q <= n; q++){ans[k] += a[x[p]][x[q]];}}
    }

    for (int64_t p = 1; p <= n; p++){printf("%lld ", ans[p]);}

    return 0;
}
