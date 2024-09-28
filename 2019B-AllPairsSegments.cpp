#include <cstdio>
#include <map>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, q; scanf("%lld %lld", &n, &q);
        std::map<ll, ll> m;
        for(ll p = 1; p <= n; p++){m[n * p - p * p + p - 1] += 1;}
        ll prev; scanf("%lld", &prev);
        for(ll p = 1; p < n; p++){
            ll x; scanf("%lld", &x);
            m[p * (n - p)] += x - prev - 1;
            prev = x;
        }

        while(q--){
            ll k; scanf("%lld", &k);
            ll res = m.count(k) ? m[k] : 0;
            printf("%lld ", res);
        }
        puts("");
    }

}
