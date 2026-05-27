#include <cstdio>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cnt(0);
        long prev(0); scanf("%ld", &prev); prev %= 2;
        for(long p = 1; p < n; p++){
            long x; scanf("%ld", &x);
            x %= 2; cnt += (x == prev);
            prev = x;
        }

        printf("%ld\n", cnt);
    }

}
