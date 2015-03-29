#include <cstdio>

int main(){

    int n(0); scanf("%d\n", &n);

    double total(0);
    for(int k = 0; k < n; k++){
        double x(0), y(0); scanf("%lf %lf\n", &x, &y);
        total += y;
    }

    printf("%.3lf\n", 5.0 + total / n);

    return 0;
}
