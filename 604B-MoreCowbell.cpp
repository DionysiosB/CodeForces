#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld\n", &n, &k);
    std::vector<long> s(n); for(long p = 0; p < n; p++){scanf("%ld", &s[p]);}
    long maxSize = s[n - 1];

    for(long p = 0; p < n - k; p++){
        long bellPair = s[p] + s[2 * (n - k) - p - 1];
        if(bellPair > maxSize){maxSize = bellPair;}
    }

    printf("%ld\n", maxSize);

    return 0;
}
