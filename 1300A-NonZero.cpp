#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long z(0), s(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            z += (x == 0);
            s += x;
        }

        long cnt = z + (s + z == 0);
        printf("%ld\n", cnt);
    }

    return 0;
}
