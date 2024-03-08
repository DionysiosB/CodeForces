#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n);
        ll s(0);
        for(ll p = 0; p < n; p++){
            scanf("%lld", &a[p]);
            s += a[p];
        }

        ll g = s / n;
        bool possible(true);
        ll cur(0);
        for(long p = 0; possible && p < n; p++){
            cur += (a[p] - g);
            if(cur < 0){possible = false;}
        }

        puts(possible ? "YES" : "NO");
    }

}
