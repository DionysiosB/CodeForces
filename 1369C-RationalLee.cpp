#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld" ,&a[p]);}
        std::vector<ll> w(k); for(ll p = 0; p < k; p++){scanf("%lld" ,&w[p]);}
        sort(a.begin(), a.end());
        sort(w.rbegin(), w.rend());
        ll s(0), idx(0);
        for(ll p = 0; p < k; p++){
            s += a[n - k + p];
            s += (w[p] > 1) ? a[idx] : a[n - k + p];
            idx += w[p] - 1;
        }
        printf("%lld\n", s);
    }

    return 0;
}
