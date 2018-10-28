#include <cstdio>

int main(){

    int a(0), b(0), c(0), d(0); scanf("%d %d %d %d", &a, &b, &c, &d);
    double first  = 1.0 * a / b; double second = 1.0 * c / d;

    printf("%.10lf\n", first / (first + second - first * second));
    return 0;
}
