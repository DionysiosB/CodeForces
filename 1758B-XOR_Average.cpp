#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n % 2){for(long p = 0; p < n; p++){printf("1 ");}}
        else{
            printf("1 3 ");
            for(long p = 2; p < n; p++){printf("2 ");}
        }
        puts("");
    }

}
