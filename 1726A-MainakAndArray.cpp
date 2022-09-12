#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long ans(-2000);
        for(long p = 1; p < n; p++){
            long tst = a[p] - a[0];
            ans = (ans > tst) ? ans : tst;
        }

        for(long p = 0; p < n - 1; p++){
            long tst = a[n - 1] - a[p];
            ans = (ans > tst) ? ans : tst;
        }

        for(long p = 0; p < n; p++){
            long tst = a[(p - 1 + n) % n] - a[p];
            ans = (ans > tst) ? ans : tst;
        }

        printf("%ld\n", ans);
    }

}
