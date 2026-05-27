#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        ll total(0);
        for(long p = 0; p < n; p++){ll x; scanf("%lld", &x); total += x;}
        if(total < 0){total *= -1;}
        printf("%lld\n", total);
    }

}
