#include <cstdio>
typedef long long ll;

int main(){

    ll n, h, a, b, k; scanf("%lld %lld %lld %lld %lld", &n, &h, &a, &b, &k);
    while(k--){
        ll ta, fa, tb, fb; scanf("%lld %lld %lld %lld", &ta, &fa, &tb, &fb);
        ll ans = (ta > tb) ? (ta - tb) : (tb - ta);
        if(ta != tb && fa < a){ans += a - fa; fa = a;} else if(ta != tb && fa > b){ans += fa - b; fa = b;}
        ans += (fb > fa) ? (fb - fa) : (fa - fb);
        printf("%lld\n", ans);
    }

    return 0;
}
