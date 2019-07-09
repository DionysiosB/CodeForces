#include <cstdio>
#include <cmath>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        double d; scanf("%lf", &d);
        if(d == 0.0){puts("Y 0.0 0.0");}
        else if(d < 4){puts("N");}
        else{printf("Y %.9lf %.9lf\n", (d + sqrt(d * d - 4 * d)) / 2, (d - sqrt(d * d - 4 * d)) / 2);}
    }

    return 0;
}
