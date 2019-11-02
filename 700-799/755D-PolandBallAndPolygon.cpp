#include <cstdio>
typedef long long ll;


int main(){

    ll n,k; scanf("%lld %lld", &n, &k);
    ll cur(0), cycle(0), cnt(1);

    k = (k < n - k) ? k : (n - k);

    for(int p = 0; p < n; p++){
        cur += k;
        cnt += cycle + 1 + (cur > n);
        if(cur > n){cycle += 2; cur %= n;}
        printf("%lld ", cnt);
    }

    puts("");

    return 0;
}
