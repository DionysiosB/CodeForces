#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k, r, c; scanf("%ld %ld %ld %ld", &n, &k, &r, &c);
        --r; --c;
        for(long row = 0; row < n; row++){
            for(long col = 0; col < n; col++){
                putchar( (row + col - r - c) % k ? '.' : 'X');
            }
            puts("");
        }
    }

}
