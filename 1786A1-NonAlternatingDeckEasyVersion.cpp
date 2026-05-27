#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long rem(n), alice(0), bob(0);
        for(long p = 1; rem > 0 && p <= n; p++){
            long take = (rem < p) ? rem : p;
            if(p % 4 <= 1){alice += take;}
            else{bob += take;}
            rem -= take;
        }

        printf("%ld %ld\n", alice, bob);
    }

}
