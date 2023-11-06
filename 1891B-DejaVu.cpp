#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, q; scanf("%lld %lld", &n, &q);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        std::vector<ll> b;
        for(ll p = 0; p < q; p++){
            ll x; scanf("%lld", &x);
            if(b.empty() || b.back() > x){b.push_back(x);}
        }

        std::vector<ll> w(b.size());
        ll prev(0); for(ll p = w.size() - 1; p >= 0; p--){w[p] = (1 << (b[p] - 1)) + prev; prev = w[p];}

        for(ll p = 0; p < a.size(); p++){
            for(ll u = 0; u < b.size(); u++){
                if(a[p] % (1 << b[u]) == 0){a[p] += w[u]; break;}
            }
        }

        for(ll p = 0; p < n; p++){printf("%lld ", a[p]);}
        puts("");
    }

}
