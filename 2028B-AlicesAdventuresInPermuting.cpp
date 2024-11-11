#include <cstdio>
typedef long long ll;

int main (){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, b, c; scanf("%lld %lld %lld", &n, &b, &c);
        ll ans(-1);
        if(b){
            if(c >= n){ans = n;}
            else{
                ll g = 1 + (n - c - 1) / b;
                ans = n - (g > 0 ? g : 0);
            }
        }
        else{
            if(c >= n){ans = n;}
            else if(c >= n - 2){ans = n - 1;}
        }

        printf("%lld\n", ans);
    }

}
