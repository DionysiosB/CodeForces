#include <cstdio>
#include <vector>

std::vector<long> getPrimes(long a){

    std::vector<bool> isPrime(a + 1, 1);
    isPrime[0] = isPrime[1] = 0;
    for(long p = 2; p * p <= a; p++){
        if(!isPrime[p]){continue;}
        for(long q = 2 * p; q <= a; q += p){isPrime[q] = 0;}
    }

    std::vector<long> primeVec;
    for(long p = 2; p <= a; p++){if(isPrime[p]){primeVec.push_back(p);}}
    return primeVec;
}


int main(){

    const long N = 1e5 + 2;
    std::vector<long> v(N, 0);
    long n; scanf("%ld", &n);

    std::vector<long> primeList = getPrimes(N + 1);

    while(n--){
        long a; scanf("%ld", &a);

        for(int p = 0; p < primeList.size(); p++){
            if(a < p){break;}
            long cur = primeList[p];
            if(a % cur != 0){continue;}
            ++v[cur];
            while(a % cur == 0){a /= cur;}
        }
    }

    long max = 1;
    for(long p = 2; p < N; p++){max = (max > v[p]) ? max : v[p];}
    printf("%ld\n", max);

    return 0;
}
