#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, a, b; scanf("%lld %lld %lld", &n, &a, &b);
        ll ans(0);
        if(b <= a){ans = b * ((n + 2) / 3);}
        else if(b <= 2 * a){ans = b * (n / 3) + a * (n % 3 == 1) + b * (n % 3 == 2);}
        else if(b <= 3 * a){ans = b * (n / 3) + a * (n % 3);}
        else{ans = n * a;}
        printf("%lld\n", ans);
    }

}
