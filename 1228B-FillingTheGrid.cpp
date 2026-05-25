#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    const ll MOD = 1000000007;

    ll h, w; scanf("%lld %lld", &h, &w);
    std::vector<std::vector<ll> > g(h, std::vector<ll>(w, 0));
    ll ans(1);

    for(ll row = 0; row < h; row++){
        ll x; scanf("%lld", &x);
        for(ll col = 0; col < x; col++){g[row][col] = 1;}
        if(x < w){g[row][x] = -1;}
    }

    for(ll col = 0; ans && (col < w); col++){
        ll x; scanf("%lld", &x);
        for(ll row = 0; row < x; row++){
            if(g[row][col] == -1){ans = 0; break;}
            g[row][col] = 1;
        }
        if(x < h){
            if(g[x][col] == 1){ans = 0; break;}
            else{g[x][col] = -1;}
        }
    }

    if(ans){
        ll cnt(0);
        for(ll row = 0; row < h; row++){for(ll col = 0; col < w; col++){cnt += (g[row][col] == 0);}}
        while(cnt--){ans *= 2; ans %= MOD;}
    }

    printf("%lld\n", ans);

    return 0;
}
