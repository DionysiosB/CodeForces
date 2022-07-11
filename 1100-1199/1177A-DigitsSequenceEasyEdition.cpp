#include <cstdio>
typedef long long ll;

int main(){

    ll k; scanf("%lld", &k);
    ll num(9), pow(1), len(1);
    bool done(false);
    while(true){
        if(k <= len * num){
            ll x = (pow - 1) + (k + len - 1) / len;
            ll y = k % len; if(y == 0){y = len;}
            for(ll u = y; u < len; u++){x /= 10;}
            printf("%lld\n", x % 10);
            break;
        }
        
        k -= len * num; ++len; pow *= 10; num *= 10;
    }

    return 0;
}
