#include <cstdio>
#include <vector>
#include <cmath>

int main(){

    long long n; scanf("%lld\n", &n);
    for(long long p = 2; p * p <= n; p++){while(n % (p * p) == 0){n /= p;}}
    printf("%lld\n", n);

    return 0;
}
