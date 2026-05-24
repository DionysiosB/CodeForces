#include <cstdio>
#include <vector>
#include <cmath>

int main(){

    long n; double r; scanf("%ld %lf", &n, &r);
    std::vector<double> vx(n), vy(n);
    for(long p = 0; p < n; p++){
        double x; scanf("%lf", &x);
        double y(r);

        for(long q = 0; q < p; q++){
            if(vx[q] + 2 * r < x || x + 2 * r < vx[q]){continue;}
            double cy = vy[q] + sqrt(4 * r * r - (x - vx[q]) * (x - vx[q]));
            y = (y > cy) ? y : cy;
        }

        vx[p] = x; vy[p] = y;
    }

    for(long p = 0; p < n; p++){printf("%.8lf ", vy[p]);}
    puts("");

    return 0;
}
