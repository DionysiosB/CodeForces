#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n + 2, 0); for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}
    std::vector<long> left(n + 2, 0), right(n + 2, 0);
    for(long p = 1; p <= n; p++){left[p] = left[p - 1] + ((p % 2) ? 1 : -1) * a[p];}
    for(long p = n; p >= 1; p--){right[p] = right[p + 1] + (((n - p) % 2) ? 1 : -1) * a[p];}
    long cnt(0);
    for(long p = 1; p <= n; p++){cnt += (left[p - 1] + (n % 2 ? 1 : -1) * right[p + 1] == 0);}
    printf("%ld\n", cnt);

    return 0;
}
