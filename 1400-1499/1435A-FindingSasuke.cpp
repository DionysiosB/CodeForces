#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n);
        for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        for(ll p = 0; p < n; p += 2){printf("%lld %lld ", a[p + 1], -a[p]);}
        puts("");
    }

    return 0;
}
