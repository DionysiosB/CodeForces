#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        std::vector<ll> q(n); for(ll &x : q){scanf("%lld", &x);}
        std::vector<ll> r(n); for(ll &x : r){scanf("%lld", &x);}
        sort(q.rbegin(), q.rend());
        sort(r.begin(), r.end());
        ll idx(0), cnt(0);
        for(ll p = 0; p < n; p++){if(q[p] * (r[idx] + 1) + r[idx] <= k){++idx; ++cnt;}}
        printf("%lld\n", cnt);
    }
    
}
