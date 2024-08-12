#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long xc, yc, k; scanf("%ld %ld %ld", &xc, &yc, &k);
        if(k % 2){--k; printf("%ld %ld\n", xc, yc);}
        for(long p = 1; p <= k / 2; p++){printf("%ld %ld\n%ld %ld\n", xc - p, yc, xc + p, yc);}
    }

}
