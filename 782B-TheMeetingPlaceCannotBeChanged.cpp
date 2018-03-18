#include <cstdio>
#include <vector>

double getTime(const std::vector<double> &x, const std::vector<double> &v, double probe){

    double maxTime(0);
    for(long p = 0; p < x.size(); p++){
        double time = (probe - x[p]) / v[p];
        if(time < 0){time = -time;}
        maxTime = (maxTime > time) ? maxTime : time;
    }

    return maxTime;
}



int main(){

    const double eps = 1e-8;
    long n; scanf("%ld", &n);
    std::vector<double> x(n), v(n);
    for(long p = 0; p < n; p++){scanf("%lf", &x[p]);}
    for(long p = 0; p < n; p++){scanf("%lf", &v[p]);}

    double left(0.0), right(1e9 + 10.0);
    while(right - left >= eps){

        double m1 = (2.0 * left + right) / 3.0;
        double m2 = (left + 2.0 * right) / 3.0;
        double t1 = getTime(x, v, m1);
        double t2 = getTime(x, v, m2);
        if(t1 < t2){right = m2;}
        else{left = m1;}
    }

    printf("%.9lf\n", getTime(x, v, (left + right) / 2));

    return 0;
}
