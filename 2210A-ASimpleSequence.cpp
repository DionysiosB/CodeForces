#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        for(long p = n; p > 0; p--){printf("%ld ", p);}
        puts("");
    }

}
