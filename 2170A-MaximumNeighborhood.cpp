#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n == 1){puts("1");}
        else if(n == 2){puts("9");}
        else if(n < 5){printf("%ld\n", 4 * n * n - n - 4);}
        else{printf("%ld\n", 5 * n * n - 5 * n - 5);}
    }
    
}
