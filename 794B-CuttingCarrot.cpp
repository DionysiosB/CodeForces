#include <cstdio>
#include <cmath>

int main(){

    double n, h; scanf("%lf %lf", &n, &h);
    for(long k = 1; k < n; k++){printf("%.9lf ", h * sqrt(1.0 * k / n));}
    puts("");

    return 0;
}
