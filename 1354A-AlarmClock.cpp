#include <cstdio>
typedef long long ll;

int  main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll a, b, c, d; scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        ll ans(0);
        if(b >= a){ans = b;}
        else if(c <= d){ans = -1;}
        else{
            a -= b; 
            ans = b + ((a + c - d - 1) / (c - d) * c);
        }

        printf("%lld\n", ans);
    }

    return 0;
}
