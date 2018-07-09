#include <cstdio>
#include <iostream>
#include <vector>

std::vector<bool> getPrimes(int64_t B){

    std::vector<bool> isPrime(B, 1);
    isPrime[0] = isPrime[1] = 0;
    for(int64_t p = 2; p * p < B; p++){
        if(!isPrime[p]){continue;}
        for(int64_t q = 2 * p; q < B; q += p){isPrime[q] = 0;}
    }

    return isPrime;
}


int main(){

    const int64_t N = 1e7 + 7;
    std::vector<int64_t> a(N, 0);

    int64_t n; scanf("%lld", &n);
    while(n--){int64_t x; scanf("%lld", &x); ++a[x];}

    std::vector<bool> isPrime = getPrimes(N);
    std::vector<int64_t> count(N, 0);

    for(int64_t p = 2; p < N; p++){
        if(!isPrime[p]){continue;}
        for(int64_t q = p; q < N; q += p){count[p] += a[q];}
    }

    for(int64_t p = 2; p < N; p++){count[p] += count[p - 1];}

    int64_t m; scanf("%lld", &m);
    while(m--){
        int64_t l, r; scanf("%lld %lld", &l, &r);
        l = (l < N - 1) ? l : (N - 1);
        r = (r < N - 1) ? r : (N - 1);
        printf("%lld\n", count[r] - count[l - 1]);
    }

    return 0;
}
