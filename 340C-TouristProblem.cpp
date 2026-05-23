#include <cstdio>
#include <vector>
#include <algorithm>


long long gcd(long long a, long long b){if(b == 0){return a;} return gcd(b, a % b);}

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long long> a(n);
    long long sum(0);
    for(long p = 0; p < n; p++){scanf("%lld", &a[p]); sum += a[p];}
    sort(a.begin(), a.end());
    long long totalDiff(0), sumSoFar(0);
    for(long p = 0; p < n; p++){
        totalDiff += p * a[p] - sumSoFar;
        sumSoFar += a[p];
    }

    long long total = sum + 2 * totalDiff;
    long long commonFactor = gcd(total, n);
    printf("%lld %lld\n", total / commonFactor, n / commonFactor);

    return 0;
}
