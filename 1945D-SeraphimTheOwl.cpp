#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m; scanf("%lld %lld", &n, &m);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        std::vector<ll> b(n); for(ll p = 0; p < n; p++){scanf("%lld", &b[p]);}

        ll prev(0), rbs(0);
        std::vector<ll> f(n, 0);
        for(ll p = n - 1; p >= 0; p--){
            f[p] = a[p] + rbs + prev;
            rbs += b[p];
            if(a[p] <= b[p]){rbs = 0; prev = f[p];}
        }

        ll ans(f[0]);
        for(ll p = 0; p < m; p++){ans = (ans < f[p] ? ans : f[p]);}
        printf("%lld\n", ans);
    }

}
