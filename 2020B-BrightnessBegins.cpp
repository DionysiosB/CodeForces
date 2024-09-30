#include <cstdio>
#include <cmath>
typedef long long ll;

int main(){
    long t; scanf("%ld", &t);
    while(t--){
        ll k; scanf("%lld", &k);
        printf("%lld\n", k + (ll)(sqrtl(k) + 0.5));
    }
}
