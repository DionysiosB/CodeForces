#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        for(long p = 2; p <= n + 1; p++){printf("%ld ", p);}
        puts("");
    }

}
