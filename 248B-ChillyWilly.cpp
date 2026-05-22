#include <cstdio>

int main(){
    
    const int product = 2 * 3 * 5 * 7;
    long n(0); scanf("%ld", &n);
    if(n < 3){puts("-1");}
    else if(n == 3){printf("%d\n", product);}
    else{
        printf("1");
        long digitsLeft(n - 1);
        int currentModulo = 1000 % product; 
        while(digitsLeft-- > 3){currentModulo *= 10; currentModulo %= product; printf("0");}
        int remaining = product - currentModulo;
        if(remaining < 100){printf("0");}; if(remaining <  10){printf("0");}
        printf("%d\n", remaining);
    }
    return 0;
}
