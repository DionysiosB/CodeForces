#include <cstdio>

int main(){

    long q; scanf("%ld", &q);
    while(q--){
        long l, r, d; scanf("%ld %ld %ld", &l, &r, &d);
        long ans = d;
        if(l <= d && d <= r){ans = d * (1 + (r / d));}
        printf("%ld\n", ans);
    }

    return 0;
}
