#include <cstdio>

int main(){

    long n, b, d; scanf("%ld %ld %ld\n", &n, &b, &d);
    long count(0), waste(0);
    while(n--){
        long a; scanf("%ld", &a);
        if(a > b){continue;}
        waste += a;
        if(waste > d){++count; waste = 0;}
    }

    printf("%ld\n", count);

    return 0;
}
