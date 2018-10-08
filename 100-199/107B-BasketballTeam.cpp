#include <cstdio>
#include <vector>

int main() {

    long n, m, h; scanf("%ld %ld %ld", &n, &m, &h);
    std::vector<long> a(m + 1, 0);
    long sum(0); 

    for (long p = 1; p <= m; p++){scanf("%ld", &a[p]); sum += a[p];}
    if (sum < n){puts("-1");}
    else {
        double s = 1.0;
        for(long p = 1; p < n; p++){s = s * (sum + 1 - a[h] - p) / (sum - p);}
        printf("%.10f",1-s);
    }

    return 0;
}
