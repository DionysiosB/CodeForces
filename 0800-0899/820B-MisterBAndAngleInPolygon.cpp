#include <cstdio>

int main(){

    long n, a; scanf("%ld %ld", &n, &a);
    long v = 2 + (n * a + 90) / 180; 
    if(v < 3){v = 3;}
    if(v > n){v = n;}
    printf("2 1 %ld\n", v);

    return 0;
}
