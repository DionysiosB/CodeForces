#include <cstdio>
#include <vector>

int main(){

    const double R = 1000.0;
    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<double> pr(n, 0.0);

    for(long p = 0; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        long left = (1 + (x - 1) / m) * m;
        long right = (y / m) * m;
        long cnt = (1 + (right - left) / m);
        pr[p] = 1.0 * cnt / (y - x + 1);
    }

    double total(0.0);
    for(long p = 0; p < n; p++){
        long q = (p + 1) % n;
        total += 2 * R * (1 - (1 - pr[p])*(1 - pr[q]));
    }

    printf("%.8lf\n", total);

    return 0;
}
