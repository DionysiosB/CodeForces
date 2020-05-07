#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll sum(0);
        ll cur; scanf("%lld", &cur);
        for(ll p = 1; p < n; p++){
            ll x; scanf("%lld", &x); 
            if(cur * x > 0){cur = (cur > x) ? cur : x;}
            else{sum += cur; cur = x;}
        }
        sum += cur;
        printf("%lld\n", sum);
    }

    return 0;
}
