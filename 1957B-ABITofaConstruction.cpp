#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        if(n == 1){printf("%lld ", k);}
        else{
            ll mx(0), tst(1);
            while(tst <= k){mx = tst; tst *= 2;}
            printf("%lld %lld ", mx - 1, k - mx + 1);
        }
        for(ll p = 2; p < n; p++){printf("0 ");}
        puts("");
    }

}
