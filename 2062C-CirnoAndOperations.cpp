#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> v(n); ll mx(0);
        for(ll p = 0; p < n; p++){scanf("%lld", &v[p]); mx += v[p];}
        
        while(v.size() > 1){
            ll total(0);
            for(ll p = 1; p < v.size(); p++){
                v[p - 1] = v[p] - v[p - 1];
                total += v[p - 1];
            }
            total = (total > 0 ? total : -total);
            mx = (mx > total ? mx : total);
            v.pop_back();
        }

        printf("%lld\n", mx);
    }

}
