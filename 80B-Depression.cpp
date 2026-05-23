#include <cstdio>

int main(){

    int hour(0), minute(0); scanf("%d:%d", &hour, &minute);
    double first  = 30 * (hour%12) + minute/2.0;
    double second = 6 * minute; 

    printf("%.10lf %.10lf", first, second);
    return 0;
}
