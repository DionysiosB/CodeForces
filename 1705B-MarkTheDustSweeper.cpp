#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll x(0), res(0);
        for(ll p = 1; p < n; p++){
            scanf("%lld", &x);
            res += x ? x : (res > 0);
        }

        scanf("%lld", &x);

        printf("%lld\n", res);
    }

}
