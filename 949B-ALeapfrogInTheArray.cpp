#include <cstdio>
typedef long long ll;

int main(){
    ll n,q; scanf("%lld %lld", &n, &q);
    while (q--){
        ll x; scanf("%lld", &x);
        while(x % 2 == 0){x = x / 2 + n;}
        printf("%lld\n", (x + 1) / 2);
    }

    return 0;
}
