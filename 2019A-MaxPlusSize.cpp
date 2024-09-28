#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long a(0), b(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(p % 2){a = (a > x ? a : x);}
            else{b = (b > x ? b : x);}
        }

        a += (n / 2);
        b += (n + 1) / 2;
        printf("%ld\n", (a > b ? a : b));
    }

}
