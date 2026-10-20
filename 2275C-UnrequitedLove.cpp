#include <cstdio>
#include <vector>
#include <map>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n);
        std::map<ll, ll> f;
        ll cnt(0);
        for(long p = 0; p < n; p++){
            scanf("%lld", &a[p]);
            if(p < 4){continue;}
            ll val = -a[p] + a[p - 2] + a[p - 4];
            bool prev = ((p >= 6) && (a[p - 6] + a[p - 4] - a[p - 2] == val));
            bool pprev = ((p >= 8) && (a[p - 8] + a[p - 6] - a[p - 4] == val));
            cnt += (f[val] - prev - pprev);
            ++f[val];
        }

        printf("%lld\n", cnt);
    }

}
