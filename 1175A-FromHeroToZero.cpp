#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        ll cnt(0);
        while(n){
            if(n % k){cnt += n % k; n -= n % k;}
            else{++cnt; n /= k;}
        }
        printf("%lld\n", cnt);
    }

    return 0;
}
