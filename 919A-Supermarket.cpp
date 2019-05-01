#include <cstdio>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    
    double mn(10001);
    while(n--){
        double c, q; scanf("%lf %lf", &c, &q);
        mn = (mn < (c / q)) ? mn : (c / q);
    }

    printf("%.8lf\n", mn * m);

    return 0;
}
