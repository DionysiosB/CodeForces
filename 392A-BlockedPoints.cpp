#include<cstdio>
#include<cmath>

int main(){

    long n(0); scanf("%ld", &n);
    if(n == 0){puts("1");}
    else{printf("%ld\n", 4 * (long)(n * sqrt(2)));}
    return 0;
}
