#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long x(0), mx(0);
        for(long p = 1; p < n; p++){scanf("%ld", &x); mx = (mx > x ? mx : x);}
        scanf("%ld", &x);
        printf("%ld\n", mx + x);
    }

}
