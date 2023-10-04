#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        for(long p = 0; p < n; p++){printf("%ld ", 2 * p + 1);}
        puts("");
    }

}
