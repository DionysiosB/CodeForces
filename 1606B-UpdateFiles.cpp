#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        ll cur(1), cnt(0);
        while(cur < n && cur <= k){cur *= 2; ++cnt;}
        if(cur < n){cnt += (n - cur + k - 1) / k;}
        printf("%lld\n", cnt);
    }

}
