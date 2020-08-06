#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll mina(1e9 + 7), minb(1e9 + 7);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]); mina = (mina < a[p]) ? mina : a[p];}
        std::vector<ll> b(n); for(ll p = 0; p < n; p++){scanf("%lld", &b[p]); minb = (minb < b[p]) ? minb : b[p];}

        ll cnt(0);
        for(ll p = 0; p < n; p++){
            ll x = a[p] - mina;
            ll y = b[p] - minb;
            cnt += (x > y) ? x : y;
        }

        printf("%lld\n", cnt);
    }

    return 0;
}
