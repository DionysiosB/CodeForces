#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        --k;
        if((n % 2)){k += k / (n / 2);}
        printf("%lld\n", 1 + (k % n));
    }

}
