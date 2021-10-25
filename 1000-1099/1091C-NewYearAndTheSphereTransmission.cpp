#include <cstdio>
#include <set>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::set<ll> s;
    for(ll p = 1; p * p <= n; p++){
        if(n % p == 0){
            ll u = n / p;
            s.insert(n * (p - 1) / 2 + p);
            if(p * p != n){s.insert(n * (u - 1) / 2 + u);}
        }
    }

    for(std::set<ll>::iterator it = s.begin(); it != s.end(); it++){printf("%lld ", *it);}
    puts("");

    return 0;
}
