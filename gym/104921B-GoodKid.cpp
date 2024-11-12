#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        ll mn(10), prod(1);
        for(long p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            if(x){prod *= x;}
            else if(!mn){prod = 0;}
            mn = (mn < x ? mn : x);
        }

        if(mn){prod = (prod / mn) * (mn + 1);}
        printf("%lld\n", prod);
    }

}
