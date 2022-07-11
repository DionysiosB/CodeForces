#include <cstdio>

int main(){

    double h, l; scanf("%lf %lf", &h, &l);
    double ans = (l * l - h * h) / (2.0 * h);
    printf("%.8lf\n", ans);

    return 0;
}
