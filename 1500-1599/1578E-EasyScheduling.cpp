#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll h, r; scanf("%lld %lld", &h, &r);
        std::vector<ll> v(h);
        v[0] = 1; for(ll p = 1; p < h; p++){v[p] = 2 * v[p - 1];}
        ll total(0), prev(0);
        for(ll p = 0; p < h; p++){
            v[p] -= prev;
            if(v[p] < r){++total; continue;}
            total += (v[p] + r - 1) / r;
            prev = (r - (v[p] % r)) % r;
        }

        printf("%lld\n", total);
    }

}
