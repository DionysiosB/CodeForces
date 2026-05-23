#include <cstdio>
#include <cmath>

int main(){

    long m, n; scanf("%ld %ld\n", &m, &n);

    double expectation = 0;
    for(int p = 1; p <= m; p++){expectation += p * (pow(1.0 * p / m, n) - pow(1.0 * (p - 1) / m, n));}
    printf("%.7lf\n", expectation);

    return 0;
}
