#include <cstdio>
#include <vector>

std::vector<int> getPrimes(long n){

    std::vector<int> v(n, 1); v[0] = v[1] = 0;
    for(long p = 2; p * p <= n; p++){
        if(!v[p]){continue;}
        for(long q = 2 * p; q < n; q += p){v[q] = 0;}
    }

    return v;
}


int main(){

    long a, b, k; scanf("%ld %ld %ld", &a, &b, &k);
    std::vector<int> isPrime = getPrimes(b + 1);
    std::vector<long> sofar(b + 10, 0);
    for(long p = 1; p <= b; p++){sofar[p] = sofar[p - 1] + isPrime[p];}

    long left(0), right(b - a + 5), ans(0);
    while(left <= right){
        long mid = (left + right) / 2;
        bool possible = true;
        for(long p = a - 1; p + mid <= b; p++){if(sofar[p + mid] - sofar[p] < k){possible = false; break;}}
        if(possible){ans = mid; right = mid - 1;}
        else{left = mid + 1;}
    }

    printf("%ld\n", (ans > b - a + 1) ? (-1) : ans);

    return 0;
}
