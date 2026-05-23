#include <cstdio>
#include <vector>
#include <algorithm>

bool check(const std::vector<double> &a, const std::vector<double> &b, long k, double x){

    std::vector<double> d(a.size());
    for(long p = 0; p < a.size(); p++){d[p] = a[p] - x * b[p];}
    sort(d.rbegin(), d.rend());
    double s(0);
    for(long p = 0; p < k; p++){
        s += d[p];
        if(s < 0){return false;}
    }

    return true;
}

int main(){

    const double eps = 1e-7;
    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<double> a(n), b(n);
    for(long p = 0; p < n; p++){scanf("%lf %lf", &a[p], &b[p]);}

    double left(0), right(1e6), res(0.0);
    while(right > left + eps){
        double mid = (left + right) / 2.0;
        if(check(a, b, k, mid)){res = mid; left = mid;}
        else{right = mid;}
    }

    printf("%.7lf\n", res);

    return 0;
}
