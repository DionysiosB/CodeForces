#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        for(long p = 1; p < n; p += 2){printf("%ld %ld ", p + 1, p);}
        puts("");
    }

}
