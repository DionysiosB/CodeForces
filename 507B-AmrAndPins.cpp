#include <cstdio>
#include <cmath>

int main(){

    double r, a, b, c, d; scanf("%lf %lf %lf %lf %lf", &r, &a, &b, &c, &d);
    double dist = sqrt((c - a) * (c - a) + (d - b) * (d - b));
    printf("%.0lf\n", ceil(dist / 2.0 / r));

    return 0;
}
