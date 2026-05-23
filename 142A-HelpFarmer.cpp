#include <cstdio>
#include <cmath>

int main(){

    long long n; scanf("%lld\n", &n);
    long long maxBlocks = 3 * 3 * (n + 1) - n;
    long long minBlocks = maxBlocks;

    for(long long x = 1; x * x * x <= n; x++){
        if(n % x != 0){continue;}
        for(long long y = 1; x * y * y <= n; y++){
            if((n / x) % y != 0){continue;}
            long long candidateMin = (x + 1) * (y + 2) * (n / x / y + 2) - n;
            if(candidateMin < minBlocks){minBlocks = candidateMin;}
        }
    }

    printf("%lld %lld\n", minBlocks, maxBlocks);

    return 0;
}
