#include <cstdio>
#include <map>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::map<ll, ll> m;
    ll rem(0);
    for(ll p = 0; p < n; p++){ll x; scanf("%lld", &x); ++m[x];}
    for(std::map<ll, ll>::iterator it = m.begin(); it != m.end(); it++){
        ll x = it->first;
        ll cnt = it->second;

        rem += cnt;
        for(ll w = 1; w < 3e9; w *= 2){
            if((w > x) && m.count(w - x) && m[w - x] >= 1 + (w == 2 * x)){rem -= cnt; break;}
        }

        //printf("%lld %lld -> %lld\n", x, cnt, rem);
    }

    printf("%lld\n", rem);

    return 0;
}
