#include <cstdio>
#include <vector>

int main(){

    const long R = 360;
    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1, 0), b(n + 1, 0);
    long minDiff(R);
    for(long p = 1; p <= n; p++){scanf("%ld", &a[p]); b[p] = b[p - 1] + a[p];}
    for(long u = 1; u <= n; u++){
        for(long v = 1; v <= u; v++){
            long total = b[u] - b[v - 1];
            long diff = total - (R - total);
            if(diff < 0){diff = -diff;}
            minDiff = (minDiff < diff) ? minDiff : diff;
        }
    }

    printf("%ld\n", minDiff);

    return 0;
}
