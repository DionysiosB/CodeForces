#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n);
        for(ll &x : a){scanf("%lld", &x);}
        sort(a.begin(), a.end());
        const ll med = a[(n - 1) / 2];
        ll total(0);
        for(ll x : a){total += (x < med ? (med - x) : (x - med));}
        printf("%lld %lld\n", total, a.back() - a[0]);
    }

}
