#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        printf("1");
        for(long p = 1; p < n; p++){printf("0");}
        puts("");
    }

}
