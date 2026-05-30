#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll sgn(1); std::vector<ll> a(n), v;
        for(ll &x : a){scanf("%lld", &x);}
        for(ll p = n - 1; p >= 0; p--){
            if(sgn * a[p] > 0){v.push_back(p + 1); sgn *= -1;}
        }

        printf("%ld\n", v.size());
        for(ll x : v){printf("%lld ", x);}
        puts("");
    }

}
