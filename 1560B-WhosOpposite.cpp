#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){

        ll a, b, c; scanf("%lld %lld %lld", &a, &b, &c);
        ll d = b - a; if(d < 0){d = -d;}
        ll n = 2 * d;
        ll res = c + ((c <= d) ? d : (-d));
        if(c > n || b > n || a > n){res = -1;}
        printf("%lld\n", res);
    }

}
