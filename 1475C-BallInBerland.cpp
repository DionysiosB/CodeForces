#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll a, b, k; scanf("%lld %lld %lld", &a, &b, &k);

        std::vector<ll> boy(k); std::vector<ll> db(a, 0); 
        for(ll p = 0; p < k; p++){scanf("%lld", &boy[p]); --boy[p]; ++db[boy[p]];}

        std::vector<ll> girl(k); std::vector<ll> dg(b, 0); 
        for(ll p = 0; p < k; p++){scanf("%lld", &girl[p]); --girl[p]; ++dg[girl[p]];}

        ll res(0);
        for(ll p = 0; p < k; p++){res += k - db[boy[p]] - dg[girl[p]] + 1;}
        printf("%lld\n", res / 2);
    }

}
