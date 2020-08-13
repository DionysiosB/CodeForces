#include <cstdio>

int main(){

    long n, m, x, y; scanf("%ld %ld %ld %ld", &n, &m, &x, &y);
    for(long row = 1; row <= n; row++){
        if(row % 2){
            for(long col = 1; col <= m; col++){
                printf("%ld %ld\n", 1 + (row + x - 2) % n, 1 + (col + y - 2) % m);
            }
        }
        else{
            for(long col = m; col >= 1; col--){
                printf("%ld %ld\n", 1 + (row + x - 2) % n, 1 + (col + y - 2) % m);
            }
        }
    }

    return 0;
}
