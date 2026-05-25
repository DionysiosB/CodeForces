#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll x; scanf("%lld", &x);
        std::vector<bool> res(10, 0);
        for(ll p = 9; p > 0 && x > 0; p--){
            if(x >= p){res[p] = 1; x -= p;}
        }

        ll num(0); for(ll p = 0; p <= 9; p++){if(res[p]){num = 10 * num + p;}}
        printf("%lld\n", (x > 0) ? -1 : num); 
    }

}
