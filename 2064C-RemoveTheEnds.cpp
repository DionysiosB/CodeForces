#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> v;
        ll cs(0);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            if( (cs >= 0 && x > 0) || (cs <= 0 && x < 0) ){cs += x;}
            else{v.push_back(cs); cs = x;}
        }

        v.push_back(cs);

        for(ll p = 0; p < v.size(); p++){
            if(v[p] < 0){continue;}
            v[p] += (p >= 2 ? v[p - 2] : 0);
        }

        for(ll p = v.size() - 1; p >= 0; p--){
            if(v[p] > 0){continue;}
            v[p] += (p + 2 < v.size() ? v[p + 2] : 0);
        }

        ll ans(0);
        for(ll p = 0; p < v.size(); p++){
            ll tst(0);
            if(v[p] > 0){tst = v[p] - (p + 1 < v.size() ? v[p + 1] : 0);}
            else{tst = -v[p] + (p ? v[p - 1] : 0);}
            ans = (ans > tst ? ans : tst);
        }

        printf("%lld\n", ans);
    }

}
