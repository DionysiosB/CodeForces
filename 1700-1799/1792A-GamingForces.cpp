#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long ones(0), cnt(0);
        for(long p = 0; p < n; p++){
            long h; scanf("%ld", &h);
            if(h > 1){++cnt;}
            else{
                ++ones;
                if(ones >= 2){ones = 0; ++cnt;}
            }
        }

        cnt += ones;
        printf("%ld\n", cnt);
    }

}
