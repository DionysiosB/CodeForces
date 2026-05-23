#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::vector<long> x(n + 1);
    for(long p = 1; p <= n; p++){scanf("%ld", &x[p]);}
    double maxDensity(0);
    while(m--){
        double a, b, c; scanf("%lf %lf %lf\n", &a, &b, &c);
        double test = (x[a] + x[b]) / c;
        if(maxDensity < test){maxDensity = test;}
    }

    printf("%.11lf\n", maxDensity);

    return 0;
}
