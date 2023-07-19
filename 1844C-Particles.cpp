#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        bool allneg(true); ll mx(-1e9 - 7);
        std::vector<ll> v(n);
        for(ll p = 0; p < n; p++){
            scanf("%lld", &v[p]);
            if(v[p] > 0){allneg = false;}
            if(allneg){mx = (mx > v[p] ? mx : v[p]);}
        }

        if(allneg){printf("%lld\n", mx); continue;}

        ll z(0), a(0);
        for(long p = 0; p < n; p++){
            if(v[p] < 0){continue;}
            if(p % 2){a += v[p];}
            else{z += v[p];}
        }

        printf("%lld\n", (a > z) ? a : z);
    }

}
