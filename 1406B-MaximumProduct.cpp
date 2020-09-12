#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        sort(a.begin(), a.end());
        ll prodA = a[n - 5] * a[n - 4] * a[n - 3] * a[n - 2] * a[n - 1];
        ll prodB = a[0] * a[1] * a[n - 3] * a[n - 2] * a[n - 1];
        ll prodC = a[0] * a[1] * a[2] * a[3] * a[n - 1];
        ll res = (prodA > prodB) ? prodA : prodB;
        res = (res > prodC) ? res : prodC;
        printf("%lld\n", res);
    }

    return 0;
}
