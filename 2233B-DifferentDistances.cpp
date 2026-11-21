#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n % 2){
            printf("3 3 2 1 1 2 1 2 2 3 1 3 ");
            for(long p = 3; p < n; p += 2){
                printf("%ld %ld %ld %ld %ld %ld %ld %ld ", p + 2, p + 1, p + 1, p + 2, p + 1, p + 2, p + 2, p + 1);
            }
        }
        else{
            for(long p = 0; p < n; p += 2){
                printf("%ld %ld %ld %ld %ld %ld %ld %ld ", p + 2, p + 1, p + 1, p + 2, p + 1, p + 2, p + 2, p + 1);
            }

        }
        puts("");
    }

}
