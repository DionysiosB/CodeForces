#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll k, x; scanf("%lld %lld", &k, &x);
        ll g(1LL << k);
        if(x <= 0 || 2 * g <= x){puts("-1"); continue;}
        ll other(2 * g - x); std::vector<ll> v;
        while(x != g){
            if(x > other){v.push_back(2); x -= other; other *= 2;}
            else{v.push_back(1); other -= x; x *= 2;}
        }


        std::reverse(v.begin(), v.end());
        printf("%ld\n", v.size());
        for(ll x : v){printf("%lld ", x);}
        puts("");
    }

}
