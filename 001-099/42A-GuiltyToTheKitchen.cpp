#include <cstdio>
#include <vector>

int main(){

    long n, V; scanf("%ld %ld\n", &n, &V);

    std::vector<double> a(n, 0);
    std::vector<double> b(n, 0);
    double propSum(0);
    for(long p = 0; p < n; p++){
        scanf("%lf", &a[p]);
        propSum += a[p];
    }

    for(long p = 0; p < n; p++){scanf("%lf", &b[p]);}

    double x = V / propSum;

    for(long p = 0; p < n; p++){
        double ratio = b[p] / a[p];
        if(ratio < x){x = ratio;}
    }

    printf("%.5lf\n", propSum * x);

    return 0;
}
