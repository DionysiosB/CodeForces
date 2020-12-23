#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

ll gcd (ll a, ll b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    sort(a.begin(), a.end());

    ll dg(0); for(ll p = 1; p < n; p++){dg = gcd(dg, a[p] - a[p - 1]);}

    for(ll p = 0; p < m; p++){ 
        ll b; scanf("%lld", &b); b += a[0];
        ll res = gcd(b, dg);
        printf("%lld ", res);
    }

    puts("");
}
