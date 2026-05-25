#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    long x = a[n - 2] - a[0];
    long y = a[n - 1] - a[1];
    printf("%ld\n", x < y ? x : y);

    return 0;
}
