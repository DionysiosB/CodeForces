#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n + 1);
        for(ll p = 1; p <= n; p++){scanf("%lld", &a[p]);}
        a.push_back(0);
        ll total(0);
        for(ll p = 1; p <= n; p++){
            if(a[p - 1] < a[p] && a[p] > a[p + 1]){
                ll x = (a[p - 1] > a[p + 1] ? a[p - 1] : a[p + 1]);
                total += (a[p] - x);
                a[p] = x;
            }

            ll diff = a[p] - a[p - 1];
            if(diff < 0){diff = -diff;}
            total += diff;
        }

        total += a[n];
        printf("%lld\n", total);

    }

}
