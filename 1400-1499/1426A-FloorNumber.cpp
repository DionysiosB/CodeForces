#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        if(n <= 2){puts("1");}
        else{printf("%ld\n", 1 + (n - 2 + x - 1) / x);}
    }

    return 0;
}
