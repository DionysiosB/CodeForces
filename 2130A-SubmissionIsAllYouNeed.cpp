#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long s(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            s += (x > 1 ? x : 1);
        }

        printf("%ld\n", s);
    }

}
