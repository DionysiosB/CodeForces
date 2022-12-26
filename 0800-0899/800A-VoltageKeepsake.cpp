#include <cstdio>
#include <vector>


bool check(const std::vector<double> &rate, const std::vector<double> &saved, const double &provided, double time){

    double req(0.0);
    for(long p = 0; p < rate.size(); p++){
        if(saved[p] > rate[p] * time){continue;}
        req += (rate[p] - saved[p] / time);
    }

    return (req <= provided);
}


int main(){

    const double eps = 0.00001;
    long n; double pow; scanf("%ld %lf", &n, &pow);
    std::vector<double> a(n), b(n);
    for(long p = 0; p < n; p++){scanf("%lf %lf", &a[p], &b[p]);}

    double sumPower(0);
    for(long p = 0; p < n; p++){sumPower += a[p];}
    if(sumPower <= pow){puts("-1"); return 0;}

    double left(0), right(1e10 + 1e7);
    while(right - left > eps){
        double mid = (left + right) / 2.0;
        if(check(a, b, pow, mid)){left = mid;}
        else{right = mid;}
    }

    printf("%.5lf\n", (left + right) / 2.0);

    return 0;
}
