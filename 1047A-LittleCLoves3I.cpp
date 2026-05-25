#include <cstdio>

int main(){

    long n; scanf("%ld", &n);

    if(n % 3 <= 1){printf("1 1 %ld\n", n - 2);}
    else{printf("1 2 %ld\n", n - 3);}

    return 0;
}
