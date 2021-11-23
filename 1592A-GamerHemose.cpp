#include <cstdio>

int main(){


    long t; scanf("%ld", &t);
    while(t--){
        long n, H; scanf("%ld %ld", &n, &H);
        long x(0), y(0);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            if(a >= x){y = x; x = a;}
            else if(a >= y){y = a;}
        }

        long res = 2 * (H / (x + y));
        H %= (x + y);
        res += (H > 0) + (H > x);
        printf("%ld\n", res);
    }

}
