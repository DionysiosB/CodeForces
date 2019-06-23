#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long m; scanf("%ld", &m);

    double w=m;
    for(long p = 0; p < 2 * n; p++){
        long x; scanf("%ld", &x);
        if(x == 1){puts("-1"); return 0;}
        w = w * x / (x - 1);
    }

    printf("%.8lf", w - m);

    return 0;
}
