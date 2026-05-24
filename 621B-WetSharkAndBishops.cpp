#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    const int N = 1000;
    std::vector<long> sums(2 * N + 1, 0);
    std::vector<long> diffs(2 * N + 1, 0);

    long n; scanf("%ld\n", &n);
    while(n--){
        int x, y; scanf("%d %d\n", &x, &y);
        ++sums[x + y];
        ++diffs[N + x - y];
    }

    int64_t total(0);
    for(int p = 0; p < 2 * N + 1; p++){
        total += sums[p] * (sums[p] - 1) / 2;
        total += diffs[p] * (diffs[p] - 1) / 2;
    }

    printf("%lld\n", total);

    return 0;
}
