#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll a, b; scanf("%lld %lld", &a, &b);
        if(a > b + 1){puts("NO"); continue;}
        ll s = a + b;
        bool res(true);
        for(ll p = 2; p * p <= s; p++){
            if(s % p == 0){res = false; break;}
        }
        puts(res ? "YES" : "NO");
    }

    return 0;
}
