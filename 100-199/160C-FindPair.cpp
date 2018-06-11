#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>

int main(){

    int64_t n, k; scanf("%lld %lld\n", &n, &k);

    std::vector<int64_t> a(n, 0);
    for(int64_t p = 0; p < n; p++){scanf("%lld ", &a[p]);}
    sort(a.begin(), a.end());
    printf("%lld %lld\n", a[(k - 1) / n], a[(k - 1) % n]);

    return 0;
}
