#include <cstdio>
typedef long long ll;

int main(){

    ll n, k, m, D; scanf("%lld %lld %lld %lld", &n, &k, &m, &D);
    ll mx(0);

    for(ll d = 0; d < D; d++){
        ll x = n / (k * d + 1);
        x = (x < m) ? x : m;
        if(x <= 0){break;}
        ll g = n / x;
        if(((g + k - 1) / k) > D + 1){continue;}
        ll candy = x * ((g + k - 1) / k);
        mx = (mx > candy) ? mx : candy;
    }

    printf("%lld\n", mx);

    return 0;
}
