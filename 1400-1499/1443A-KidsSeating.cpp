#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        for(long p = 4 * n; p > 2 * n; p -= 2){printf("%ld ", p);}
        puts("");
    }

    return 0;
}
