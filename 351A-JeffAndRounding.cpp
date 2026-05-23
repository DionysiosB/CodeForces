#include <cstdio>

int main(){

    int n; scanf("%d\n", &n);
    long decimalCount(0), decimalTotal(0);
    for(int p = 0; p < 2 * n; p++){
        int intPart, decimalPart; scanf("%d.%d\n", &intPart, &decimalPart);
        decimalTotal += decimalPart;
        if(decimalPart > 0){++decimalCount;}
    }


    int test = decimalCount - n; if(test < 0){test = 0;}
    double output = 1e9;
    while(test <= decimalCount && test <= n){
        long candidate = decimalTotal - 1000 * test;
        if(candidate < 0){candidate = -candidate;}
        if(candidate < output){output = candidate;}
        ++test;
    }

    output /= 1000;
    printf("%.3lf\n", output);

    return 0;
}
