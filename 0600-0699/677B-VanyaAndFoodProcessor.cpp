#include <cstdio>

int main(){

    long long n, h, k; scanf("%lld %lld %lld\n", &n, &h, &k);
    long long current(0);
    long long time(0);
    for(long long p = 0; p < n; p++){
        long long a; scanf("%lld", &a);
        if(current + a > h){current = 0; ++time;}
        current += a;
        time += current / k;
        current %= k;
    }

    time += (current > 0);
    
    printf("%lld\n", time);

    return 0;
}
