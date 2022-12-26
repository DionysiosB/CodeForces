#include <cstdio>

int main(){

    long long n; scanf("%lld\n", &n);
    if(n <= 2){puts("-1");}
    else if(n % 2){printf("%lld %lld\n", (n * n) / 2, 1 + (n * n) / 2);}
    else{printf("%lld %lld\n", (n * n) / 4 - 1 , (n * n) / 4 + 1);}

    return 0;
}
