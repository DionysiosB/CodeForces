#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long R, C; scanf("%ld %ld", &R, &C);
        for(long row = 0; row < R; row++){
            for(long col = 0; col < C; col++){
                printf("%c", (row + col == 0) ? 'W' : 'B');
            }
            puts("");
        }
    }

    return 0;
}
