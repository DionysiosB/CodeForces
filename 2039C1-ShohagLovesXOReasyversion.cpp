#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, m; scanf("%ld %ld", &x, &m);
        long cnt(0);
        for(long p = 1; p < x; p++){
            long y = x ^ p;
            if(y > m){continue;}
            cnt += ((x % p == 0) || (y % p == 0));
        }

        printf("%ld\n", cnt);
    }

}
