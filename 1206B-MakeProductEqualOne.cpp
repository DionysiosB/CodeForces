#include <cstdio>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    ll neg(0), cnt(0);
    bool zero(false);
    for(ll p = 0; p < n; p++){
        ll a; scanf("%lld", &a);
        if(a == 0){++cnt; zero = true;}
        else if(a > 0){cnt += a - 1;}
        else if(a < 0){cnt += -a - 1; ++neg;}
    }

    cnt += 2 * (!zero) * (neg % 2);
    printf("%lld\n", cnt);

    return 0;
}
