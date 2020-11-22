#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long nrow, ncol; scanf("%ld %ld", &nrow, &ncol);
        for(long row = 0; row < nrow; row++){
            for(long col = 0; col < ncol; col++){
                long u = ((row % 2) ^ (col % 2));
                long x; scanf("%ld", &x);
                x += ((x % 2) != (u % 2));
                printf("%ld ", x);
            }
            puts("");
        }
    }
}
