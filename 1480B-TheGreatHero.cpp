#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll A, B, n; scanf("%lld %lld %lld", &A, &B, &n);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        std::vector<ll> b(n); for(ll p = 0; p < n; p++){scanf("%lld", &b[p]);}

        ll mxd(0);
        for(ll p = 0; p < n; p++){
            ll r = (b[p] + A - 1) / A;
            B -= r * a[p];
            mxd = (mxd > a[p] ? mxd : a[p]); 
        }

        puts(B + mxd > 0 ? "YES" : "NO");
    }

}
