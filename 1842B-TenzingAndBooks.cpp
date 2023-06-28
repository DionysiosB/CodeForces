#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        long k(0);
        for(long u = 0; u < 3; u++){
            bool read = true;
            for(long p = 0; p < n; p++){
                long cur; scanf("%ld", &cur);
                if((x | cur) != x){read = false;}
                if(read){k |= cur;}
            }
        }

        puts(x == k ? "Yes" : "No");
    }

}
