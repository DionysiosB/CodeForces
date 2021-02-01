#include<cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        ll cs(0), res(0);
        scanf("%lld", &cs);
        for(ll p = 1; p < n; p++){
            ll x; scanf("%lld", &x);
            if(100 * x > k * (cs + res)){res = (100 * x - k * cs + (k - 1)) / k;}
            cs += x;
        }

        printf("%lld\n", res);
    }

}
