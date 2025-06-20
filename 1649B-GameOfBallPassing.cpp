#include <cstdio>
typedef long long ll;

int main() {

    ll t; scanf("%lld", &t);
    while (t--){
        ll n; scanf("%lld", &n);
        ll s(0), mx(0);
        for(ll p = 0; p < n; p++){
            ll a; scanf("%lld", &a);
            s += a;
            mx = (mx > a ? mx : a);
        }

        if(!s){puts("0");}
        else if(2 * mx <= s){puts("1");}
        else{printf("%lld\n", 2 * mx - s);}
    }

}
