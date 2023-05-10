#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        sort(a.begin(), a.end());
        ll u = a[0] * a[1];
        ll v = a[n - 2] * a[n - 1];
        printf("%lld\n", u > v ? u : v);
    }

}
