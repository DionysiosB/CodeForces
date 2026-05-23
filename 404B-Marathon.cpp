#include <cstdio>

int main(){

    double a(0), d(0); scanf("%lf %lf\n", &a, &d);
    long n(0); scanf("%ld\n", &n); 

    double distance = 0;

    for(long k = 1; k <= n; k++){
        distance += d;
        if(distance >= 4 * a){distance -= 4 * a * ((int) (distance / 4 / a));}
        if(distance <= a){printf("%.5lf 0.00000\n", distance);}
        else if(distance <= 2 * a){printf("%.5lf %.5lf\n", a, distance - a);}
        else if(distance <= 3 * a){printf("%.5lf %.5lf\n", 3 * a - distance ,a);}
        else if(distance <= 4 * a){printf("0.00000 %.5lf\n", 4 * a - distance);}
    }

    return 0;
}
