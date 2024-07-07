#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll cs(0), mx(-1), cnt(0);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            mx = (mx > x ? mx : x);
            cs += x;
            cnt += (cs == 2 * mx);
        }

        printf("%lld\n", cnt);
    }

}
