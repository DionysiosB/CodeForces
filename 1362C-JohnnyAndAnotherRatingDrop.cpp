#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll cnt(0);
        ll denom(1);
        for(ll p = 0; p < 64; p++){
            cnt += (n / denom);
            denom *= 2;
            if(denom > n){break;}
        }

        printf("%lld\n", cnt);
    }

    return 0;
}
