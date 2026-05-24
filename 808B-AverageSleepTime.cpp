#include <cstdio>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    double total(0);
    for(long p = 1; p <= n; p++){
        double x; scanf("%lf", &x);
        double multA = (k < n - k + 1) ? k : (n - k + 1);
        double multB = (p < n - p + 1) ? p : (n - p + 1); 
        double mult = (multA < multB) ? multA : multB;
        total += mult * x;
    }

    double average = total / (n - k + 1);
    printf("%.7lf\n", average);

    return 0;
}
