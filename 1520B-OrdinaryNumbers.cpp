#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll cnt(0);
        for(ll digit = 1; digit <= 9; digit++){
            ll cur = digit;
            for(ll rep = 1; rep <= 10; rep++){
                if(cur <= n){++cnt;}
                else{break;}
                cur = 10 * cur + digit;
            }
        }

        printf("%lld\n", cnt);
    }

}
