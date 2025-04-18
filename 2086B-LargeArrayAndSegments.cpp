#include <cstdio>
#include <vector>
typedef long long ll;
 
int main(){
 
    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k, x; scanf("%lld %lld %lld", &n, &k, &x);
        std::vector<ll> a(n);
        ll s(0);
        for(ll p = 0; p < n; p++){
            scanf("%lld", &a[p]);
            s += a[p];
        }
        
        ll cnt(n * k);
        cnt -= (x / s) * n;
        x %= s;
        cnt += (!x);
        for(ll p = n - 1; x > 0 && cnt > 0 && p >= 0; p--){
            x -= a[p];
            if(x <= 0){break;}
            --cnt;
        }
        
        cnt = (cnt > 0 ? cnt : 0);
        printf("%lld\n", cnt);
    }
 
}
