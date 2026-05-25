#include <cstdio>
typedef long long ll;

bool check(ll d, ll x){
    ll s = x * (x + 1) / 2;
    if(d > s){return false;}
    return (d % 2 == s % 2);
}

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll a, b; scanf("%lld %lld", &a, &b);
        ll d = a - b; if(d < 0){d = -d;}
        if(d <= 0){puts("0"); continue;}
        ll x(0); while(!check(d, x)){++x;}
        printf("%lld\n", x);
    }

    return 0;
}
