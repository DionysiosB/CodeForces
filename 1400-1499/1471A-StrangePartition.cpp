#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, x; scanf("%lld %lld", &n, &x);
        ll s(0), mx(0);
        while(n--){
            ll a; scanf("%lld", &a);
            s += a;
            mx += (a + x - 1) / x;
        }

        ll mn = (s + x - 1) / x;
        printf("%lld %lld\n", mn, mx);
    }

}
