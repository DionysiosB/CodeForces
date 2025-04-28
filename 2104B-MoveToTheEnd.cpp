#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> v(n), mv(n), sv(n);
        for(ll p = 0; p < n; p++){scanf("%lld", &v[p]);}
        mv[0] = v[0];
        for(ll p = 1; p < n; p++){mv[p] = (mv[p - 1] > v[p]) ? mv[p - 1] : v[p];}

        sv.back() = v.back();
        for(ll p = n - 2; p >= 0; p--){sv[p] = sv[p + 1] + v[p];}

        for(ll p = n - 1; p >= 0; p--){printf("%lld ", mv[p] + ((p + 1 < n) ? sv[p + 1] : 0) );}
        puts("");

    }

}
