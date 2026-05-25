#include <cstdio>
typedef long long ll;

int main(){

    ll q; scanf("%lld", &q);
    while(q--){
        ll a, b; scanf("%lld %lld", &a, &b);
        ll res(0);
        ll n = b - a + 1;
        if(n % 2){res += (b % 2) ? (-b) : b;}
        res += (a % 2 ? 1 : -1) * (n / 2);
        printf("%lld\n", res);
    }

    return 0;
}
