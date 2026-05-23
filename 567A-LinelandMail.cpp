#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> x(n);
    for(long p = 0; p < n; p++){scanf("%ld", &x[p]);}

    printf("%ld %ld\n", x[1] - x[0], x[n - 1] - x[0]);
    for(long p = 1; p < n - 1; p++){
        long currentMin = (x[p] - x[p - 1]) < (x[p + 1] - x[p]) ? (x[p] - x[p - 1]) : (x[p + 1] - x[p]);
        long currentMax = (x[n - 1] - x[p]) > (x[p] - x[0]) ? (x[n - 1] - x[p]) : (x[p] - x[0]);
        printf("%ld %ld\n", currentMin, currentMax);
    }
    printf("%ld %ld\n", x[n - 1] - x[n - 2], x[n - 1] - x[0]);


    return 0;
}
