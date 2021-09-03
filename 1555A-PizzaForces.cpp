#include <cstdio>
#include <vector>
typedef long long ll;


//2.5 minutes per slice for all three choices; LCP[6,8,10] = 120;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        n = (n > 6) ? n : 6;
        ll res = (n + 1) / 2 * 5;  //if odd, make it even;
        printf("%lld\n", res);
    }

}
