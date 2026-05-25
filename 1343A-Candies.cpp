#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll m(1);
        for(ll p = 1; p < 50; p++){
            m = 2 * m + 1;
            if(n % m){continue;}
            printf("%lld\n", n / m);
            break;
        }
    }

    return 0;
}
