#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1, 0);
    for(long p = 1; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        ++a[x]; ++a[y];
    }

    long cnt(0);
    for(long p = 1; p <= n; p++){cnt += (a[p] == 1);}
    printf("%ld\n", cnt);

    return 0;
}
