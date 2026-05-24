#include <cstdio>

int main(){

    double d, L, v1, v2; scanf("%lf %lf %lf %lf\n", &d, &L, &v1, &v2);
    double t = (L - d) / (v1 + v2);
    printf("%.15lf\n", t);

    return 0;
}
