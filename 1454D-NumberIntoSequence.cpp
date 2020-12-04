#include <cstdio>
#include <map>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::map<ll, ll> factors;
        ll rem(n);
        for(ll p = 2; p * p <= n; p++){
            if(p * p > rem){break;}
            if(rem % p){continue;}
            while(rem % p == 0){++factors[p]; rem /= p;}
        }

        if(rem > 0){factors[rem] = 1;}

        ll mx(0), div(1);
        for(std::map<ll, ll>::iterator it = factors.begin(); it != factors.end(); it++){
            ll key = it->first;
            ll val = it->second;
            if(val > mx){mx = val; div = key;}
        }

        printf("%lld\n", mx);
        for(ll p = 1; p < mx; p++){printf("%lld ", div); n /= div;}
        printf("%lld\n", n);
    }

}
