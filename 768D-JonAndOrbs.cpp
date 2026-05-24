#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    const double eps = 1e-7;
    const double DIV = 2000;

    long k, q; scanf("%ld %ld", &k, &q);
    long D = 10 * k;
    std::vector<std::vector<double> > f(k + 1, std::vector<double>(D, 0));

    f[0][0] = 1;
    for(long u = 1; u <= k; u++){
        for(long t = 1; t < D; t++){
            f[u][t] = (1.0 * u / k) * f[u][t - 1] + (1 - 1.0 * (u - 1.0) / k) * f[u - 1][t - 1];
        }
    }

    std::vector<double> g(D);
    for(long p = 0; p < D; p++){g[p] = f[k][p];}

    while(q--){
        double prob; scanf("%lf", &prob);
        prob /= DIV;
        std::vector<double>::iterator it = std::lower_bound(g.begin(), g.end(), prob);
        printf("%ld\n", (it - g.begin()));
    }

    return 0;
}
