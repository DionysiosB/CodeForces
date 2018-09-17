#include <cstdio>

int main(){

    double r, d; scanf("%lf %lf", &r, &d);
    long n; scanf("%ld", &n);
    long count(0);
    while(n--){
        double x, y, a; scanf("%lf %lf %lf", &x, &y, &a);
        count += (x * x + y * y >= (r - d + a) * (r - d + a)) && (x * x + y * y <= (r - a) * (r - a));
    }

    printf("%ld\n", count);

    return 0;
}
