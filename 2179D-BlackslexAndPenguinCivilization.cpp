#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        for(long b = (1 << n); b > 0; b /= 2){
            for(long x = b - 1; x < (1 << n); x += 2 * b){printf("%ld ", x);}
        }
        puts("");
    }

}
