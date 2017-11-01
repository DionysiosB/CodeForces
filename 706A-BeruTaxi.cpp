#include <cstdio>
#include <cmath>

int main(){

    double a, b; scanf("%lf %lf\n", &a, &b);
    int n; scanf("%d\n", &n);
    double minTime(1000);
    while(n--){
        double x, y, v; scanf("%lf %lf %lf\n", &x, &y, &v);
        double time = sqrt((x - a) * (x - a) + (y - b) * (y - b)) / v;
        minTime = (minTime < time) ? minTime : time;
    }

    printf("%.8lf\n", minTime);

    return 0;
}
