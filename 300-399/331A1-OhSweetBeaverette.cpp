#include <cstdio>
#include <vector>
#include <map>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n + 1, 0); for(ll p = 1; p <= n; p++){scanf("%lld", &a[p]);}
    std::vector<ll> b(n + 1, 0); std::map<ll, std::vector<ll> > w;

    ll cur(0);
    for(ll p = 1; p <= n; p++){
        w[a[p]].push_back(p);
        b[p] = b[p - 1] + (a[p] > 0 ? a[p] : 0);
    }

    ll mx(-2e10), left(0), right(0);
    for(std::map<ll, std::vector<ll> >::iterator it = w.begin(); it != w.end(); it++){
        ll x = it->first;
        std::vector<ll> v = it->second;
        if(v.size() < 2){continue;}
        ll sum = b[v.back()] - b[v[0] - 1] + 2 * (x < 0 ? x : 0);
        if(sum > mx){mx = sum; left = v[0]; right = v.back();}
    }

    std::vector<ll> tocut;
    for(ll p = 1; p <= n; p++){
        if((p < left) || (p > right) || (p > left && p < right && a[p] < 0)){tocut.push_back(p);}
    }

    printf("%lld %ld\n", mx, tocut.size());
    for(ll u = 0; u < tocut.size(); u++){printf("%lld ", tocut[u]);}
    puts("");

    return 0;
}
