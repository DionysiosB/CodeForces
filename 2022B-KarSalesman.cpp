#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, x; scanf("%lld %lld", &n, &x);
        ll sa(0), mxa(0);
        for(ll p = 0; p < n; p++){
            ll a; scanf("%lld", &a);
            sa += a; mxa = (mxa > a ? mxa : a);
        }

        ll res((sa + x - 1) / x);
        res = (res > mxa ? res : mxa);
        printf("%lld\n", res);
    }

    //PROOF: Make a grid of res rows and x columns;
    //Start populating it starting with the first element, then the second etc
    //Since res >= max(a) then there will be no row with the same element

}
