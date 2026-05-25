#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;
 
bool check(std::vector<ll> x, const std::vector<ll> &y, const ll &add, const ll &mod){
    for(ll p = 0; p < x.size(); p++){x[p] += add; x[p] %= mod;}
    sort(x.begin(), x.end());
    for(ll p = 0; p < x.size(); p++){if(x[p] != y[p]){return false;}}
    return true;
}
 
int main(){
 
    ll n, m; scanf("%lld %lld", &n, &m);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    std::vector<ll> b(n); for(ll p = 0; p < n; p++){scanf("%lld", &b[p]);}
    sort(b.begin(), b.end());
 
    ll res(m + 1);
    for(ll p = 0; p < n; p++){
        ll diff = (2 * m + b[0] - a[p]) % m;
        if(diff > res){continue;}
        if(check(a, b, diff, m)){res = diff;}
    }
 
    printf("%lld\n", res);
 
    return 0;
}
