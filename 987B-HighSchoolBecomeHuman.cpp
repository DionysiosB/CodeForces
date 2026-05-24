#include <cstdio>
#include <cmath>

int main(){

    double x, y; scanf("%lf %lf", &x, &y);
    double diff = y * log(x) - x * log(y);
    if(diff == 0){puts("=");}
    else{puts(diff < 0 ? "<" : ">");}

    return 0;
}
