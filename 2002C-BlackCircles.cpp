#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> x(n), y(n);
        for(ll p = 0; p < n; p++){scanf("%lld %lld", &x[p], &y[p]);}
        ll xs, ys, xt, yt; scanf("%lld %lld %lld %lld", &xs, &ys, &xt, &yt);
        ll dst = (xs - xt) * (xs - xt) + (ys - yt) * (ys - yt);
        bool possible(true);
        for(long p = 0; possible && p < n; p++){
            ll cdt = (x[p] - xt) * (x[p] - xt) + (y[p] - yt) * (y[p] - yt);
            if(cdt <= dst){possible = false;}
        }

        puts(possible ? "YES" : "NO");
    }

}
