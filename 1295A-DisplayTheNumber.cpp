#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n & 1){printf("7"); n -= 3;}
        for(long p = 0; p < (n / 2); p++){printf("1");};
        puts("");
    }

    return 0;
}
