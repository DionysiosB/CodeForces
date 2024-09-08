#include <cstdio>
#include <vector>
#include <algorithm>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a % b);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, a, b; scanf("%ld %ld %ld", &n, &a, &b);
        long g = gcd(a, b);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        for(long p = 0; p < n; p++){v[p] %= g;}
        sort(v.begin(), v.end());
        long rng = v.back() - v[0];
        for(long p = 1; p < n; p++){
            long tst = g - (v[p] - v[p - 1]);
            rng = (tst < rng ? tst : rng);
        }

        printf("%ld\n", rng);
    }
}
