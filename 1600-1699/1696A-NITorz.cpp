#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, z; scanf("%lld %lld", &n, &z);
        ll mx(0);
        while(n--){
            ll x; scanf("%lld", &x);
            ll y = x | z;
            mx = (mx > y) ? mx : y;
        }

        printf("%lld\n", mx);
    }

}
