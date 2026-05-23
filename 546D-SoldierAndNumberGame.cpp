#include <cstdio>
#include <vector>
#include <cmath>

int main(){

    const int N = 5000000;
    std::vector<bool> isPrime(N + 1, 1);
    std::vector<int> adiv(N + 1, 1);
    isPrime[0] = isPrime[1] = 0;
    for(long p = 2; p <= 1 + sqrt(N); p++){
        if(!isPrime[p]){continue;}
        for(long q = 2 * p; q <= N; q += p){isPrime[q] = 0; adiv[q] = p;}
    }


    std::vector<long> factors(N + 1, 0);
    std::vector<int64_t> sumFactors(N + 1, 0);
    for(long p = 2; p <= N; p++){
        if(isPrime[p]){factors[p] = 1;}
        else{factors[p] = factors[p / adiv[p]] + 1;}
        sumFactors[p] = sumFactors[p - 1] + factors[p];
    }

    long t; scanf("%ld\n", &t);
    while(t--){
        long a, b; scanf("%ld %ld\n", &a, &b);
        printf("%lld\n", sumFactors[a] - sumFactors[b]);
    }

    return 0;
}
