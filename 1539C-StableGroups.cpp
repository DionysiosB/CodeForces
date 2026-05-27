#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;


int main(){

    ll n, k, x; scanf("%lld %lld %lld", &n, &k, &x);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    sort(a.begin(), a.end());
    std::vector<ll> d;
    for(ll p = 1; p < n; p++){
        ll diff = a[p] - a[p - 1];
        if(diff > x){d.push_back((diff - 1) / x);}
    }
    sort(d.begin(), d.end());
    ll res(d.size() + 1);
    for(ll p = 0; p < d.size(); p++){
        if(k >= d[p]){k -= d[p]; --res;}
        else{break;}
    }

    printf("%lld\n", res);
}
