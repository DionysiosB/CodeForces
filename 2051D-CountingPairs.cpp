#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, x, y; scanf("%lld %lld %lld", &n, &x, &y);
        ll s(0);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]); s += a[p];}
        sort(a.begin(), a.end());
        ll start(0), right(n - 1);
        while(start < n && a[start] + a.back() + y < s){++start;}
        ll cnt(0);
        for(ll p = start; p < n; p++){
            while(p < right && a[p] + a[right] + x > s){--right;}
            if(right < p){break;}
            cnt += (right - p);
            printf("p:%lld right:%lld   -> ap:%lld ar:%lld     cnt:%lld\n", p, right, a[p], a[right], cnt);
        }

        printf("%lld\n", cnt);
    }
}
