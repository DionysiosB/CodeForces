#include <cstdio>
#include <vector>
#include <map>
typedef long long ll;

int main(){

    ll N = 1e6 + 7;
    std::vector<ll> d(N, 1);
    for(ll div = 2; div < N; div++){for(ll p = div; p < N; p += div){d[p] += div;}}
    std::map<ll, ll> m;
    for(ll p = 1; p < N; p++){
        if(m.count(d[p])){continue;}
        m[d[p]] = p;
    }

    ll t; scanf("%lld", &t);
    while(t--){
        ll x; scanf("%lld", &x);
        printf("%lld\n", m.count(x) ? m[x] : -1);
    }

}
