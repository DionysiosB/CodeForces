#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n % 2){
            printf("1 ");
            for(long p = 2; p < n; p += 2){printf("%ld %ld ", p + 1, p);}
        }
        else{for(long p = 1; p < n; p += 2){printf("%ld %ld ", p + 1, p);}}
        puts("");
    }

}
