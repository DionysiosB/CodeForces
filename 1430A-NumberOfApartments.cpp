#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n == 1 || n == 2 || n == 4){puts("-1"); continue;}
        long a(0), b(0), c(n / 7);
        if(n % 7 == 1){--c; a = b = 1;}
        else if(n % 7 == 2){--c; a = 3;}
        else if(n % 7 == 3){a = 1;}
        else if(n % 7 == 4){--c; a = 2; b = 1;}
        else if(n % 7 == 5){b = 1;}
        else if(n % 7 == 6){a = 2;}
        printf("%ld %ld %ld\n", a, b, c);
    }

    return 0;
}
