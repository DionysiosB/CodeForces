#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        ll res(1); for(long p = 0; p < n; p++){ll x; scanf("%lld", &x); res *= x;}
        res += (n - 1);
        printf("%lld\n", 2022 * res);
    }

}
