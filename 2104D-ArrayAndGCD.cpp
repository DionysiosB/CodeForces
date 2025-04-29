#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;


int main(){

    const ll B = 7e6;
    std::vector<bool> zb(B, 1);
    zb[0] = zb[1] = 0;
    for(ll p = 2; p * p <= B; p++){
        if(!zb[p]){continue;}
        for(ll q = 2 * p; q < B; q += p){zb[q] = 0;}
    }

    std::vector<ll> w(1, 0);
    for(ll p = 0; p < B; p++){
        if(!zb[p]){continue;}
        w.push_back(w.back() + p);
    }

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> v(n);
        for(ll p = 0; p < n; p++){scanf("%lld", &v[p]);}
        sort(v.rbegin(), v.rend());
        for(ll p = 1; p < n; p++){v[p] += v[p - 1];}
        ll ans(0);
        for(ll p = 0; p < n; p++){
            if(v[p] < w[p + 1]){ans = n - p; break;}
        }

        printf("%lld\n", ans);
    }

}
