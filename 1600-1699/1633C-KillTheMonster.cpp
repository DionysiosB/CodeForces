#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll hc, dc; scanf("%lld %lld", &hc, &dc);
        ll hm, dm; scanf("%lld %lld", &hm, &dm);
        ll k, w, a; scanf("%lld %lld %lld", &k, &w, &a);

        ll win(false);
        for(ll p = 0; !win && p <= k; p++){
            ll dct = dc + p * w;
            ll hct = hc + (k - p) * a;
            ll fa = (hm + dct - 1) / dct;
            ll fb = (hct + dm - 1) / dm;
            if(fa <= fb){win = true;}
        }

        puts(win ? "YES" : "NO");
    }


}
