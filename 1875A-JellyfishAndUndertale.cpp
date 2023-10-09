#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll a, b, n; scanf("%lld %lld %lld", &a, &b, &n);
        ll res(b);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            res += (x < (a - 1)) ? x : (a - 1);
        }

        printf("%lld\n", res);
    }

}
