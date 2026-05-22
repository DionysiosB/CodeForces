#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include <algorithm>

int main(){

    const long double PI = 4 * atan(1.0);
    long n; scanf("%ld", &n);
    std::vector<double> phi(n);
    for(int p = 0; p < n; p++){
        double x, y; scanf("%lf %lf", &x, &y);
        phi[p] = atan2(y , x) * 180.0 / PI;
    }

    double angle(0.0);
    sort(phi.begin(),phi.end());

    for(int p = 1; p < n; p++){angle = std::max(angle, phi[p] - phi[p - 1]);}
    angle = std::max(angle, 360.0 - (phi.back() - phi[0]));

    printf("%.8lf\n", 360.0 - angle); 

    return 0;
}
