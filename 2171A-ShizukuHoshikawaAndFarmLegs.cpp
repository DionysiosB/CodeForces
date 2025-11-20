#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n % 2){puts("0"); continue;}
        n /= 2;
        printf("%ld\n", 1 + n / 2);
    }

}
