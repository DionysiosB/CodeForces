#include <cstdio>

long long gcd (long long a, long long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    int numCases(0); scanf("%d", &numCases);
    while(numCases--){
        long long n(0); scanf("%lld", &n);
        printf("%lld\n", 1 + 4 * n / gcd(4 * n, n + 1));
    }

    return 0;
}
