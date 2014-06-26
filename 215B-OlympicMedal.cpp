#include <cstdio>
#include <cstdlib>
#include <cmath>

int main(){

    double temp(0);

    int n(0); scanf("%d", &n);
    double maxR1(0); while(n--){scanf("%lf", &temp); if(temp > maxR1){maxR1 = temp;}}

    int m(0); scanf("%d", &m);
    double maxP1(0); while(m--){scanf("%lf", &temp); if(temp > maxP1){maxP1 = temp;}}

    int k(0); scanf("%d", &k);
    double minP2(5000); while(k--){scanf("%lf", &temp); if(temp < minP2){minP2 = temp;}}

    double A(0), B(0); scanf("%lf %lf", &A, &B);

    double output = maxR1 * sqrt((B * maxP1) / (B * maxP1 + A * minP2));
    printf("%.10lf\n", output);

    return 0;
}
