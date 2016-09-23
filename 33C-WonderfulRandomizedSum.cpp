#include <cstdio>

int main(){

    long n; scanf("%ld\n", &n);
    long sum(0), target(0), maxsubsum(0);
    while(n--){
        long a; scanf("%ld", &a);
        sum += a;
        target += a;
        if(target < 0){target = 0;}
        if(target > maxsubsum ){maxsubsum = target;}
    }

    printf("%ld\n", 2 * maxsubsum - sum);

    return 0;
}
