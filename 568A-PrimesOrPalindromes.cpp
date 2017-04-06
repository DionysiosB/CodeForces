#include<cstdio>
#include<vector>
#include<cmath>

bool isPalindrome(long x){

    std::vector<int> digits;
    if(x <= 0){return false;}
    while(x > 0){digits.push_back(x % 10); x /= 10;}

    int n = digits.size();
    for(int p = 0; p <= n / 2; p++){if(digits[p] != digits[n - 1 - p]){return false;}}
    return true;
}

int main(){

    const int N = 1200000;

    std::vector<bool> isPrime(N + 1, 1);
    isPrime[0] = isPrime[1] = 0;
    for(long p = 0; p <= 1 + sqrt(N); p++){
        if(!isPrime[p]){continue;}
        for(long q = 2 * p; q <= N; q += p){isPrime[q] = 0;}
    }

    std::vector<long> primeCount(N + 1, 0);
    for(long p = 1; p <= N; p++){primeCount[p] = primeCount[p - 1] + isPrime[p];}

    std::vector<bool> isPal(N + 1, 0);
    for(long p = 1; p <= N; p++){isPal[p] = isPalindrome(p);}

    std::vector<long> palCount(N + 1, 0);
    for(long p = 1; p <= N; p++){palCount[p] = palCount[p - 1] + isPal[p];}

    long p, q; scanf("%ld %ld\n", &p, &q);
    for(long k = N; k >= 1; k--){if(p * palCount[k] >= q * primeCount[k]){printf("%ld\n", k); return 0;}}
    puts("Palindromic tree is better than splay tree");

    return 0;
}
