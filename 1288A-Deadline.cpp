#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, d; scanf("%lld %lld", &n, &d);
        bool ans(false);
        for(ll p = 0; p * p <= d + 10; p++){
            ll u = p + (d + p) / (p + 1);
            if(u <= n){ans = true; break;}
        }
        puts(ans ? "YES" : "NO");
    }

    return 0;
}
