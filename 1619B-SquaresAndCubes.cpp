#include <cstdio>
#include <set>
typedef long long ll;

int main(){

    std::set<ll> s;
    for(ll p = 1; p * p <= 1e9; p++){s.insert(p * p);}
    for(ll p = 1; p * p * p <= 1e9; p++){s.insert(p * p * p);}

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll cnt(0);
        for(std::set<ll>::iterator it = s.begin(); ((*it) <= n) && it != s.end(); it++){++cnt;}
        printf("%lld\n", cnt);
    }

}
