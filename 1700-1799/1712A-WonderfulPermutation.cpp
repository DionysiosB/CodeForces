#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long cnt(k);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(p >= k){continue;}
            if(x <= k){--cnt;}
        }

        printf("%ld\n", cnt);
    }

}
