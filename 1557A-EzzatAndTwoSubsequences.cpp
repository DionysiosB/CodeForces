#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long double s(0), mx(-1e11);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            s += x;
            mx = (mx > x) ? mx : x;
        }

        double res = mx + (s - mx) / (n - 1);
        printf("%.10lf\n", res);
    }

}
