#include <cstdio>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    long minTime(k);
    for(long p = 0; p < n; p++){
        long a; scanf("%ld", &a);
        if(k % a){continue;}
        minTime = (minTime < (k / a)) ? minTime : (k / a);
    }

    printf("%ld\n", minTime);

    return 0;
}
