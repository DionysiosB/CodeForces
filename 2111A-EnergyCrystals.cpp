#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        long g(1), cnt(0);
        while(g < x){g = 2 * g + 1; ++cnt;}
        printf("%ld\n", 2 * cnt + 3);
    }

}
