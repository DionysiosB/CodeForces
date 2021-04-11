#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){

        ll n; scanf("%lld", &n);
        std::vector<ll> b(n + 2); for(ll p = 0; p < n + 2; p++){scanf("%lld", &b[p]);}
        sort(b.begin(), b.end());
        ll sf(0); for(ll p = 0; p < n; p++){sf += b[p];}
        if(sf == b[n]){
            for(ll p = 0; p < n; p++){printf("%lld ", b[p]);}
            puts("");
        }
        else{
            sf += b[n];
            ll sg(b.back()), idx(-1);
            for(ll p = 0; p <= n; p++){if(sg + b[p] == sf){idx = p; break;}}
            if(idx < 0){puts("-1");}
            else{
                for(ll p = 0; p <= n; p++){
                    if(p == idx){continue;}
                    else{printf("%lld ", b[p]);}
                }
                puts("");
            }
        }

    }

}
