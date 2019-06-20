#include <cstdio>
#include <map>
typedef long long ll;

int main(){

    ll n, q; scanf("%lld %lld", &n, &q);
    std::map<ll, ll> m; for(ll p = 0; p < n; p++){ll x; scanf("%lld", &x); ++m[x];}

    while(q--){
        ll b; scanf("%lld", &b);
        std::map<ll, ll> cur(m);

        ll cnt(0);
        for(ll pow = 1; pow <= 2e9; pow *= 2){
            ll val = pow * ((b / pow) % 2);
            if(val == 0){continue;}
            for(ll u = pow; u >= 1; u /= 2){
                if(!cur.count(u)){continue;}
                if(cur[u] * u >= val){cur[u] -= val / u; cnt += val / u; val = 0; break;}
                else{cnt += cur[u]; val -= cur[u] * u;  cur[u] = 0;}
            }

            if(val > 0){cnt = -1; break;}
        }

        printf("%lld\n", cnt);
    }

    return 0;
}
