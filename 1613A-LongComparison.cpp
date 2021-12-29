#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll x, r; scanf("%lld %lld", &x, &r);
        ll y, s; scanf("%lld %lld", &y, &s);

        ll u(r), tx(x); while(tx){tx /= 10; ++u;}
        ll v(s), ty(y); while(ty){ty /= 10; ++v;}
        if(u < v){puts("<");}
        else if(u > v){puts(">");}
        else{
            while(r < s){y *= 10; --s;}
            while(s < r){x *= 10; --r;}
            if(x < y){puts("<");}
            else if(x > y){puts(">");}
            else if(x == y){puts("=");}
        }
    }

}
