#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x, y; scanf("%ld %ld %ld", &n, &x, &y);
        long u = (x < y) ? x : y;
        long v = (x > y) ? x : y;

        if(u == 0 && v == 0){puts("-1");}
        else if(u > 0 && v > 0){puts("-1");}
        else if(u == 0 && (n - 1) % v){puts("-1");}
        else if(u == 0 && ((n - 1) % v == 0) ){
            long cur(0);
            for(long p = 0; p < n - 1; p++){
                if(p % v == 0){cur = 2 + p;}
                printf("%ld ", cur);
            }
            puts("");
        }
        else{puts("-1");}
    }

}
