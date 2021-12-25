#include <cstdio>
#include <vector>
typedef long long ll;

ll gcd(ll a, ll b){return (b == 0) ? a : gcd(b, a % b);}

int main(){
    
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        ll x(0), y(0);
        for(ll p = 0; p < n; p++){
            if(p % 2 == 0){x = gcd(x, a[p]);}
            else if(p % 2 == 1){y = gcd(y, a[p]);}
        }

        bool gx(true), gy(true);
        for(ll p = 0; p < n; p++){
            if(p % 2 == 0 && a[p] % y == 0){gy = false;}
            else if(p % 2 == 1 && a[p] % x == 0){gx = false;}
        }

        if(gx){printf("%lld\n", x);}
        else if(gy){printf("%lld\n", y);}
        else{puts("0");}
    }

}
