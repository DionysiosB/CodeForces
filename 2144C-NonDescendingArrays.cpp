#include <cstdio>
#include <vector>

int main(){

    const long MOD = 998244353;

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
        long ans(1);
        for(long p = 0; p < n; p++){
            long prev = p ? (a[p - 1] > b[p - 1] ? a[p - 1] : b[p - 1]) : 0;
            long cur = (a[p] < b[p] ? a[p] : b[p]);
            if(prev <= cur){ans *= 2; ans %= MOD;}
        }

        printf("%ld\n", ans);
    }

}
