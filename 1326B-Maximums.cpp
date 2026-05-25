#include <cstdio>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    ll mx(0);
    for(ll p = 0; p < n; p++){
        ll b; scanf("%lld", &b);
        ll a = b + mx;
        printf("%lld ", a);
        mx = (mx > a) ? mx : a;
    }

    puts("");

    return 0;
}
