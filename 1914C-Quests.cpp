#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}

        long csa(0), mb(0), ans(0);
        for(long p = 0; p < n && p < k; p++){
            csa += a[p];
            mb = (mb > b[p]) ? mb : b[p];
            long tst = csa + (k - p - 1) * mb;
            ans = (ans > tst ? ans : tst);
        }

        printf("%ld\n", ans);
    }

}
