#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll prev(0), res(0);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            ll prod = x * prev;
            res = (res > prod) ? res : prod;
            prev = x;
        }

        printf("%lld\n", res);
    }

}
