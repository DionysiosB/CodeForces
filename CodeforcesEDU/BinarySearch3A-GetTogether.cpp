#include <cstdio>
#include <vector>

bool check(const std::vector<double> &x, const std::vector<double> &v, double t){

    double left(-1e15), right(1e15);
    for(long p = 0; p < x.size(); p++){
        double cur_left  = x[p] - t * v[p];
        double cur_right = x[p] + t * v[p];
        left  = (left > cur_left) ? left : cur_left;
        right = (right < cur_right) ? right : cur_right;
        if(left > right){return false;}
    }

    return true;
}

int main(){

    const double eps = 1e-6;
    long n; scanf("%ld", &n);
    std::vector<double> x(n), v(n);
    for(long p = 0; p < n; p++){scanf("%lf %lf", &x[p], &v[p]);}

    double low(0), high(1e12), res(1e12);
    while(high > low + eps){
        double mid = (low + high) / 2.0;
        if(check(x, v, mid)){res = mid; high = mid;}
        else{low = mid;}
    }

    printf("%.7lf\n", res);

    return 0;
}
