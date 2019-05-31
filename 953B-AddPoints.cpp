#include <cstdio>
#include <vector>
#include <algorithm>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> x(n); for(long p = 0; p < n; p++){scanf("%ld", &x[p]);}
    sort(x.begin(), x.end());
    long g = x[1] - x[0];
    for(long p = 1; p < n; p++){g = gcd(g, x[p] - x[p - 1]);}

    long cnt(0);
    for(long p = 1; p < n; p++){cnt += (x[p] - x[p - 1]) / g - 1;}
    printf("%ld\n", cnt);

    return 0;
}
