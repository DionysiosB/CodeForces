#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, x; scanf("%lld %lld", &n, &x);
        ll mb(0), mf(0);
        for(ll p = 0; p < n; p++){
            ll d, h; scanf("%lld %lld", &d, &h);
            mb = (mb > d) ? mb : d;
            ll diff = d - h;
            mf = (mf > diff) ? mf : diff;
        }

        if(x > mb && mf <= 0){puts("-1");}
        else{
            ll cnt(1); x -= mb;
            if(x > 0){cnt += (x + mf - 1) / mf;}
            printf("%lld\n", cnt);
        }
    }

    return 0;
}
