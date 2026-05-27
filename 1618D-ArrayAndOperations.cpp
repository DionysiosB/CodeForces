#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        long long res(0);
        for(long p = 0; p < n - 2 * k; p++){res += a[p];}
        for(long p = 0; p < k; p++){res += a[n - k - 1 - p] / a[n - 1 - p];}
        printf("%lld\n", res);
    }

}
