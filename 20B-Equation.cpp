#include <cstdio>
#include <cmath>

int main(){

    double a, b, c; scanf("%lf %lf %lf", &a, &b, &c);
    if(a == 0){
        if(b == 0){puts(c ? "0" : "-1");}
        else{printf("1\n%.6lf\n", -c/b);}
    }
    else{
        if(a < 0){a = -a; b = -b; c = -c;}
        double d = b * b - 4 * a * c;
        if(d < 0){puts("0");}
        else if(d == 0){printf("1\n%.6lf\n", - b / (2 * a));}
        else if(d > 0){printf("2\n%.6lf\n%.6lf\n", (-b - sqrt(d)) / (2 * a), (- b + sqrt(d)) / (2 * a));}
    }

    return 0;
}
