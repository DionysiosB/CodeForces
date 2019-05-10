#include <cstdio>
#include <map>
typedef long long ll;

ll getCost(ll x, const ll &k, const ll &a, const ll &b, std::map<ll, ll> &m){

    if(x == 1){return 0;}
    else if(k <= 1 || k > x){return (a * (x - 1));}
    else if(m.count(x)){return m[x];}
    else if(x % k == 0){
        ll cur = getCost(x / k, k, a, b, m) + ((b < (x - x / k) * a) ? b : ((x - x / k) * a));
        m[x] = cur; return cur;
    }
    else{
        ll mult = k * (x / k);
        ll cur = getCost(mult, k, a, b, m) + (x - mult) * a;
        m[x] = cur; return cur;
    }

    return 0;
}

int main(){

    ll n, k, a, b; scanf("%lld %lld %lld %lld", &n, &k, &a, &b);
    std::map<ll, ll> m; m[1] = 0;
    ll ans = getCost(n, k, a, b, m);

    printf("%lld\n", ans);

    return 0;
}
