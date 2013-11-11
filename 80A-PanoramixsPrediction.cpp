#include <cstdio>

int main(){
    const int numPrimes = 15;
    const int primes[numPrimes] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int n, m; scanf("%d %d", &n, &m); 
    bool output = 0;
    for(int k = 0; k < numPrimes - 1; k++){if(n == primes[k] && m == primes[k + 1]){output = 1;}}
    output ? printf("YES\n") : printf("NO\n");
    return 0;
}
