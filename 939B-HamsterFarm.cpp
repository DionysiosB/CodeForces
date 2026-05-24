#include <cstdio>
typedef long long ll;

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    ll mx(0), cnt(0), w(1);
    for(long p = 1; p <= k; p++){
        ll x; scanf("%lld", &x);
        ll num = x * (n / x);
        if(num > mx){mx = num; cnt = (n / x); w = p;}
    }

    printf("%lld %lld\n", w, cnt);

    return 0;
}
