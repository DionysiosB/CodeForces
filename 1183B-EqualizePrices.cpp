#include <cstdio>

int main(){

    long q; scanf("%ld", &q);
    while(q--){
        long n, k; scanf("%ld %ld", &n, &k);
        long mn(1e9), mx(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            mn = (mn < x) ? mn : x;
            mx = (mx > x) ? mx : x;
        }

        if(mx - mn <= 2 * k){printf("%ld\n", mn + k);}
        else{puts("-1");}
    }

    return 0;
}
