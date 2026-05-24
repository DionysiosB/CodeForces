#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    bool done(false);
    long maxSum(0), minAbs(2e9);
    for(long p = 0; p < n; p++){
        long a; scanf("%ld", &a);
        if(a > 0){maxSum += a;}
        if(a % 2 == 0){continue;}
        if(a < 0){a = -a;}
        minAbs = (minAbs < a) ? minAbs : a;
    }
    
    printf("%ld\n", (maxSum % 2) ? maxSum : (maxSum - minAbs));

    return 0;
}
