#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, a; scanf("%ld %ld", &n, &a);
        long cnt(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            cnt += (x > a) - (x < a);
        }

        printf("%ld\n", a - 1 + 2 * (cnt > 0));
    }

}
