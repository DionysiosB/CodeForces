#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; double w; scanf("%ld %lf\n", &n, &w);
    std::vector<double> cups(2 * n);
    for(long p = 0; p < 2 * n; p++){scanf("%lf", &cups[p]);}
    sort(cups.begin(), cups.end());

    double girlCap = cups[0]; double boyCap = cups[n];
    double total = (2 * girlCap < boyCap) ? (3 * n * girlCap) : (1.5 * n * boyCap);
    if(total > w){total = w;}

    printf("%.8lf\n", total);

    return 0;
}
