#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.rbegin(), a.rend());
    long long total(0), maxSum(-2e9);
    for(long p = 0; p < n; p++){
        if((a[p] % 2 == 0) && (a[p] < 0)){continue;}
        total += a[p];
        if((total % 2) && (total > maxSum)){maxSum = total;}
    }

    printf("%lld\n", maxSum);

    return 0;
}
