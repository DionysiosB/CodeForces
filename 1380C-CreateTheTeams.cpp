#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, x; scanf("%lld %lld", &n, &x);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        sort(a.rbegin(), a.rend());
        ll num(0), cnt(0);
        for(long p = 0; p < a.size(); p++){
            ++cnt;
            if(cnt * a[p] >= x){++num; cnt = 0;}
        }

        printf("%lld\n", num);
    }

    return 0;
}
