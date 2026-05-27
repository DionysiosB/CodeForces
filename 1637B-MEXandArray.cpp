#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        ll res(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            res += (1 + (x == 0)) * (p + 1) * (n - p);
        }

        printf("%lld\n", res);
    }

}
