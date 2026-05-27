#include <cstdio>
typedef long long ll;
 
int main(){
 
    const ll MXC = 1e10;
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll left(1e9 + 7), lc(0), right(-1e9 - 7), rc(0), single(0), sc(0), res(0);
        for(ll p = 0; p < n; p++){
            ll x(0), y(0), z(0); scanf("%lld %lld %lld", &x, &y, &z);
            if (x < left){left = x; lc = MXC;}
            if (x == left){lc = lc < z ? lc : z;}

            if (right < y){right = y, rc = MXC;}
            if (right == y){rc = (rc < z ? rc : z);}

            if (single < y - x + 1){single = y - x + 1, sc = MXC;}
            if (single == y - x + 1){sc = (sc < z ? sc : z);}

            ll res = lc + rc;
            if(single == right - left + 1){res = (res < sc ? res : sc);}
 
            printf("%lld\n", res);
        }
 
    }
 
}
