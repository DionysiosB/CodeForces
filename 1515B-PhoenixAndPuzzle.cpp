#include <cstdio>
#include <set>
typedef long long ll;

int main(){

    std::set<ll> s; for(ll p = 1; p < 1e5; p++){s.insert(p * p);}

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        puts(((n % 2 == 0 && s.count(n / 2)) || (n % 4 == 0 && s.count(n / 4))) ? "YES" : "NO");
    }
}
