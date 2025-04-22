#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool v[101] = {0};
        long total(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            total += 1 - v[x];
            v[x] = 1;
        }

        printf("%ld\n", total);
    }

}
