#include <cstdio>

int main(){

    long n(0); scanf("%ld\n", &n);
    if(n % 2){printf("%d %ld", 9, n - 9);}
    else{printf("%d %ld\n", 4, n - 4);}

    return 0;
}
