#include <cstdio>
#include <vector>
#include <map>
typedef long long ll;

ll gcd(ll a, ll b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    long n; scanf("%ld", &n);
    std::vector<ll> lv(n); for(ll p = 0; p < n; p++){scanf("%lld", &lv[p]);}
    std::vector<ll> cv(n); for(ll p = 0; p < n; p++){scanf("%lld", &cv[p]);}


    std::map<ll, ll> f;
    for(ll p = 0; p < n; p++){
        ll len(lv[p]), cost(cv[p]);
        if((!f.count(len)) || (cost < f[len])){f[len] = cost;}
        for(std::map<ll, ll>::iterator it = f.begin(); it != f.end(); it++){
            ll key = it->first;
            ll val = it->second;
            ll g = gcd(key, len);
            if((!f.count(g)) || (cost + val < f[g])){f[g] = cost + val;}
        }
    }

    printf("%lld\n", f.count(1) ? f[1] : -1);

    return 0;
}
