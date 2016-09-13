#include <cstdio>
#include <cmath>

int main(){

    double x1, y1, r1; scanf("%lf %lf %lf\n", &x1, &y1, &r1);
    double x2, y2, r2; scanf("%lf %lf %lf\n", &x2, &y2, &r2);
    double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double ans = 0;

    if(d > r1 + r2){ans = (d - r1 - r2) / 2.0;}
    else if(d < r1 - r2){ans = (r1 - d - r2) / 2.0;}
    else if(d < r2 - r1){ans = (r2 - d - r1) / 2.0;}

    printf("%.9lf\n", ans);
    return 0;
}
