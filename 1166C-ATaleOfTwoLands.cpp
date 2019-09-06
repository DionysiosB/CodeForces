#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> v(n + 1, 2e9 + 7); for(long p = 0; p < n; p++){scanf("%ld", &v[p]); v[p] = (v[p] > 0) ? v[p] : -v[p];}
    sort(v.begin(), v.end());

    long idx(0); long long cnt(0);
    for(long p = 0; p < n; p++){
        while(idx <= n && v[idx] <= 2 * v[p]){++idx;}
        cnt += (idx - p - 1);
    }

    printf("%lld\n", cnt);

    return 0;
}
