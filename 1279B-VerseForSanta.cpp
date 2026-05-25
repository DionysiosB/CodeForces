#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, s; scanf("%lld %lld", &n, &s);
        std::vector<ll> a(n); for(long p = 0; p < n; p++){scanf("%lld", &a[p]);}
        ll d(0), mx(0), pos(0);
        for(ll p = 0; p < n; p++){
            d += a[p];
            if(a[p] > mx){mx = a[p]; pos = p + 1;}
            if(d > s){break;}
        }

        printf("%lld\n", pos * (d > s));
    }

    return 0;
}
