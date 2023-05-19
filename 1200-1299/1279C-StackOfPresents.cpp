#include <cstdio>
#include <vector>
#include <map>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m; scanf("%lld %lld", &n, &m);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        std::vector<ll> b(m); std::map<ll, ll> s; for(ll p = 0; p < m; p++){scanf("%lld", &b[p]); s[b[p]] = p;}
        std::vector<ll> d(m, 0); for(ll p = 0; p < n; p++){if(s.count(a[p])){d[s[a[p]]] = p;}}
        //for(ll p = 0; p < d.size(); p++){printf("%lld ", d[p]);};puts("");

        ll mx(0), prev(0), cnt(0);
        for(long p = 0; p < m; p++){
            if(d[p] >= mx){mx = d[p]; cnt += 2 * (d[p] - prev) + 1; ++prev;}
            else{++cnt;}
        }

        printf("%lld\n", cnt);
    }

    return 0;
}
