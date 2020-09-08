#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll avail(0), cnt(0);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            if(x > 0){avail += x;}
            else if(x < 0){
                if(x + avail > 0){avail += x;}
                else{x += avail; cnt -= x; avail = 0;}
            }
        }

        printf("%lld\n", cnt);
    }

    return 0;
}
