#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(2 * n);
    for(long p = 0; p < 2 * n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    std::vector<long> b(2 * n);
    for(long p = 1; p < 2 * n; p++){b[p] = ((p >= 2) ? b[p - 2] : 0) + (a[p] - a[p - 1]);}
    long inst = 2 * 50 * 5000;
    for(long u = 0; u < 2 * n; u += 2){
        for(long v = 2 * n - 1; v > u; v -= 2){
            long cand = ((u > 0) ? b[u - 1] : 0) + (b[v - 1] - b[u]) + (b.back() - b[v]);
            inst = (inst < cand) ? inst : cand;
        }
    }

    printf("%ld\n", inst);

    return 0;
}
