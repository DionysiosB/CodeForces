#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll sa(0), sb(0), ma(1e9 + 7), mb(1e9 + 7);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            ma = (ma < x ? ma : x);
            sa += x;
        }

        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            mb = (mb < x ? mb : x);
            sb += x;
        }

        ll candA(sa + n * mb), candB(sb + n * ma);
        printf("%lld\n", candA < candB ? candA : candB);
    }

}
