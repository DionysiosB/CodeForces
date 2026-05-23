#include <cstdio>
#include <cmath>

int isSmaller(double rhs, double x){return x * x + std::sqrt(x) < rhs;}

int main(){

    const double eps = 1e-10;
    double c; scanf("%lf", &c); 
    double left(0.1), right(1e15), res(0);
    while(right > left + eps){
        res = (left + right) / 2;
        if(isSmaller(c, res)){left = res;}
        else{right = res;}
    }

    printf("%lf\n", res);

    return 0;
}
