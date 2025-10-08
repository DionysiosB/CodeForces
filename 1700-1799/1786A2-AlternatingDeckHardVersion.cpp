#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long rem(n), aw(0), ad(0), bw(0), bd(0), sw(1);
        for(long p = 1; rem > 0 && p <= n; p++){
            long take = (rem < p) ? rem : p;
            long tw = (take + sw) / 2;
            long td = (take + (1 - sw)) / 2;
            if(p % 2){sw = 1 - sw;}

            if(p % 4 <= 1){aw += tw; ad += td;}
            else{bw += tw; bd += td;}
            rem -= take;
        }

        printf("%ld %ld %ld %ld\n", aw, ad, bw, bd);
    }

}
