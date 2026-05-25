#include <cstdio>
typedef long long ll;

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    ll prev(0), cnt(0);
    for(ll p = 0; p < n; p++){
        ll x; scanf("%lld", &x);
        if(prev > 0 && prev + x < k){++cnt; prev = 0;}
        else{x += prev; cnt += x / k; prev = x % k;}
    }

    cnt += (prev > 0);
    printf("%lld\n", cnt);

    return 0;
}
