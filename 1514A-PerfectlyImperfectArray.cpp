#include <cstdio>
#include <set>
typedef long long ll;

int main(){

    std::set<ll> s; for(ll p = 0; p < 107; p++){s.insert(p * p);}

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        bool res(false);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            if(!(s.count(x))){res = true;}
        }

        puts(res ? "YES" : "NO");
    }

}
