#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main() {

    ll t; scanf("%lld", &t);
    while (t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        std::vector<ll> a, b;
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            if(x > 0){a.push_back(x);}
            else{b.push_back(-x);}
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ll total(0);
        for(long p = a.size() - 1; p >= 0; p -= k){total += 2 * a[p];}
        for(long p = b.size() - 1; p >= 0; p -= k){total += 2 * b[p];}

        if(a.empty()){a.push_back(0);}
        else if(b.empty()){b.push_back(0);}

        total -= (a.back() > b.back() ? a.back() : b.back());
        
        printf("%lld\n", total);
    }

}
