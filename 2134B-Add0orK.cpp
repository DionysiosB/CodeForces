#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        for(ll p = 0; p < n; p++){
            a[p] += (a[p] % (k + 1)) * k;
        }

        for(ll p = 0; p < n; p++){printf("%lld ", a[p]);}
        puts("");
    }

}
