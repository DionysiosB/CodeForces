#include <cstdio>
#include <cmath>
#include <vector>

int main(){

    long n; scanf("%ld\n", &n);

    std::vector<bool> primes(n + 1, 1);
    primes[0] = 0; primes[1] = 0;
    for(long p = 2; p <= sqrt(n); p++){
        if(!primes[p]){continue;}
        for(long q = 2; p * q <= n; q++){primes[q * p] = 0;}
    }

    std::vector<long> ans;
    for(long p = 0; p <= n; p++){
        if(!primes[p]){continue;}
        for(long q = p; q <= n; q *= p){ans.push_back(q);}
    }

    printf("%ld\n", ans.size());
    for(long p = 0; p < ans.size(); p++){printf("%ld ", ans[p]);}
    puts("");

    return 0;
}
