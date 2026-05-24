#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n / 2); for(long p = 0; p < n / 2; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());

    long x(0);
    for(long p = 0; p < n / 2; p++){
        long dist = 2 * p + 2 - a[p]; if(dist < 0){dist = -dist;}
        x += dist;
    }

    long y(0);
    for(long p = 0; p < n / 2; p++){
        long dist = 2 * p + 1 - a[p]; if(dist < 0){dist = -dist;}
        y += dist;
    }

    printf("%ld\n", (x < y) ? x : y);

    return 0;
}
