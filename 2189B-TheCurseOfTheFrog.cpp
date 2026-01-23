#include <cstdio>
typedef long long ll;

int main(){
    
    ll t; scanf("%lld", &t);
    while(t--){
        ll n, x; scanf("%lld %lld", &n, &x);
        ll mxlen(0);
        for(ll p = 0; p < n; p++){
            ll a, b, c; scanf("%lld %lld %lld", &a, &b, &c);
            x -= (a * (b - 1));
            ll len = (a * b - c);
            mxlen = (mxlen > len ? mxlen : len);
        }
        
        ll mncnt(-1);
        if(x <= 0){mncnt = 0;}
        else if(mxlen > 0){mncnt = (x + mxlen - 1) / mxlen;}
        printf("%lld\n", mncnt);
    }
    
}
