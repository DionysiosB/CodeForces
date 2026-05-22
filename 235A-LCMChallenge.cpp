#include <cstdio>

int main(){

    long n(0); scanf("%ld", &n);

    if(n == 1){puts("1");}
    else if(n == 2){puts("2");}
    else if(n == 3){puts("6");}
    else if(n > 3 && (n % 2 == 1)){printf("%lld\n",  ((long long) n) * (n - 1) * (n - 2));}
    else if(n > 3 && (n % 2 == 0) && (n % 3 == 0)){printf("%lld\n",  ((long long) (n - 1)) * (n - 2) * (n - 3));}
    else if(n > 3 && (n % 2 == 0) && (n % 3 != 0)){printf("%lld\n",  ((long long) n) * (n - 1) * (n - 3));}
    else{puts("-1");}

    return 0;
}
