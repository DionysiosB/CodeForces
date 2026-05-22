#include<cstdio>
#include<vector>
#include<map>
typedef long long ll;

int main(){
    
    std::map<ll,ll> cmap;
    ll n; scanf("%lld", &n);
    std::vector<ll> a(n), b(n);
    ll same(0);
    for(ll p = 0; p < n; p++){scanf("%lld", &a[p]); ++cmap[a[p]];}
    for(ll p = 0; p < n; p++){scanf("%lld", &b[p]); ++cmap[b[p]]; same += (b[p] == a[p]);}

    ll total(1);
    ll MOD; scanf("%lld", &MOD);

    for(std::map<ll, ll>::iterator it = cmap.begin(); it != cmap.end(); it++){
        for (ll p = 1; p <= it->second; p++){
            ll x = p;
            while(same > 0 && x % 2 == 0){x /= 2; --same;}
            total *= x; total %= MOD;
        }
    }

    total %= MOD;
    printf("%lld\n", total);

    return 0;
}
