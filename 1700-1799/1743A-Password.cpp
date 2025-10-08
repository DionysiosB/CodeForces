#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x);}
        long r = 10 - n;
        printf("%ld\n", 3 * r * (r - 1));
    }

}
