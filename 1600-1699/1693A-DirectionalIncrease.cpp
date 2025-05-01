#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n);
        bool ans(true);
        for(ll p = 0; p < n; p++){
            scanf("%lld", &a[p]);
            if(p > 0){a[p] += a[p - 1];}
            if(a[p] < 0){ans = false;}
        }

        if(a.back() != 0){ans = false;}
        bool zero(false);
        for(ll p = 0; ans && p < n; p++){
            if(a[p] && zero){ans = false;}
            else if(!a[p]){zero = true;}
        }

        puts(ans ? "Yes" : "No");
    }

}
