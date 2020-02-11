#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){

        ll n; scanf("%lld", &n);

        ll cur(0), cnt(0);
        for(ll p = 0; p < 10; p++){
            cur = 10 * cur + 1;
            for(ll u = 1; u <= 9; u++){cnt += (u * cur <= n);}
        }

        printf("%lld\n", cnt);
    }

    return 0;
}
