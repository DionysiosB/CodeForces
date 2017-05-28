#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> x(n);
    for(long p = 0; p < n; p++){scanf("%ld", &x[p]);}
    sort(x.begin(), x.end());
    long distance = x[n - 1] - x[0];
    for(long p = 0; p < n / 2; p++){if(distance > x[p + n/2] - x[p]){distance = x[p + n/2] - x[p];}}
    printf("%ld\n", distance);

    return 0;
}
