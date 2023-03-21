#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k, d, w; scanf("%ld %ld %ld %ld", &n, &k, &d, &w);
        long cnt(0), rem(0), exp(-1);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(rem <= 0 || exp < x){
                ++cnt;
                rem = k - 1;
                exp = x + w + d;
            }
            else{--rem;}
        }

        printf("%ld\n", cnt);
    }

}
