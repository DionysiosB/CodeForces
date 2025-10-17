#include <cstdio>
#include <set>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::set<ll> s; ll total(0);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            if(s.count(x)){s.erase(x); total += 2 * x;}
            else{s.insert(x);}
        }

        ll prev(0);
        ll perim(s.size() + 2 < n ? total : 0);
        for(ll y : s){
            ll tst(0);
            if(total + prev > y){tst = total + prev + y; perim = (perim > tst ? perim : tst);}
            if(total > y){tst = total + y; perim = (perim > tst ? perim : tst);}
            prev = y;
        }
        printf("%lld\n", perim);

    }

}
