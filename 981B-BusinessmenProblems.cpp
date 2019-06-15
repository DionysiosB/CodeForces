#include <cstdio>
#include <map>
typedef long long ll;

int main(){

    std::map<ll, ll> r;
    ll n; scanf("%lld", &n);
    while(n--){
        ll x, y; scanf("%lld %lld", &x, &y);
        if(r.count(x)){r[x] = (r[x] > y) ? r[x] : y;}
        else{r[x] = y;}
    }

    ll m; scanf("%lld", &m);
    while(m--){
        ll x, y; scanf("%lld %lld", &x, &y);
        if(r.count(x)){r[x] = (r[x] > y) ? r[x] : y;}
        else{r[x] = y;}
    }

    ll total(0);
    for(std::map<ll, ll>::iterator it = r.begin(); it != r.end(); it++){total += it->second;}
    printf("%lld\n", total);

    return 0;
}
