#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    std::vector<ll> a(n);
    for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    for(ll p = 0; p < m; p++){ll x; scanf("%lld", &x); a[x - 1] = -a[x - 1];}
    ll res(0);
    std::vector<ll> b;
    for(ll p = 0; p < n; p++){
        if(a[p] >= 0){res += a[p];}
        else{b.push_back(-a[p]);}
    }
    sort(b.rbegin(), b.rend());
    for(long p = 0; p < b.size(); p++){res += (res > b[p]) ? res : b[p];}
    printf("%lld\n", res);

    return 0;
}
