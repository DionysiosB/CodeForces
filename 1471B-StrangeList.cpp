#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, x; scanf("%lld %lld", &n, &x);
        std::vector<std::pair<ll, ll> > a(n);
        for(ll p = 0; p < n; p++){scanf("%lld", &a[p].first); a[p].second = 1;}
        ll idx(0), res(0); bool add(true);
        while(idx < a.size()){
            ll q = a[idx].first; 
            ll y = a[idx].second;
            res += q * y;
            if(q % x){add = false;}
            if(add){a.push_back(std::make_pair(q / x, x * y));}
            ++idx;
        }

        printf("%lld\n", res);
    }

}
