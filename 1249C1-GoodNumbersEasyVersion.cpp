#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll q; scanf("%lld", &q);
    while(q--){
        ll n; scanf("%lld", &n);
        std::vector<ll> b;
        while(n > 0){b.push_back(n % 3); n /= 3;}

        bool carry(0);
        for(ll p = 0; p < b.size(); p++){
            b[p] += carry; carry = 0;
            if(b[p] <= 1){continue;}
            for(ll u = 0; u <= p; u++){b[u] = 0;}
            carry = 1;
        }
        if(carry){b.push_back(1);}
        ll m(0); for(ll p = 0, cur = 1; p < b.size(); p++, cur *= 3){m += b[p] * cur;}
        printf("%lld\n", m);
    }

    return 0;
}
