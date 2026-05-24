#include <cstdio>
typedef long long ll;

int main(){

    ll n, w; scanf("%lld %lld", &n, &w);
    ll mn(0), mx(0), cs(0);
    for(ll p = 0; p < n; p++){
        ll a; scanf("%lld", &a);
        cs += a;
        mn = (mn < cs) ? mn : cs;
        mx = (mx > cs) ? mx : cs;
    }

    ll lower = -mn;
    ll upper = w - mx;
    ll ans = upper - lower + 1;
    ans = (ans > 0) ? ans : 0;
    printf("%lld\n", ans);

    return 0;
}
