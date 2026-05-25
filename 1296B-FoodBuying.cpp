#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll s; scanf("%lld", &s);
        ll total(0);
        while(s >= 10){
            ll u = s;
            total += 10 * (u / 10); 
            s = (u / 10) + (u % 10);
        }

        total += s;
        printf("%lld\n", total);
    }

    return 0;
}
