#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll total(0); bool res(true);
        for(ll p = 0; p < n; p++){
            ll a; scanf("%lld", &a);
            total += a;
            if(total < (p + 1) * (p + 2) / 2){res = false;}
        }

        puts(res ? "YES" : "NO");
    }

}
