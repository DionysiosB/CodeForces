#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll mx(0), sum(0);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            mx = (mx > x) ? mx : x;
            sum += x;
        }

        ll res = (n - 1) * mx - sum;
        if(res < 0){res = ((n - 1) - (sum % (n - 1))) % (n - 1);}

        printf("%lld\n", res);
    }

}
