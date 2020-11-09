#include <cstdio>
#include <vector>

bool check(const std::vector<double> &a, double len, const double time){

    double x(0), rem(time);
    for(long p = 1; p < a.size(); p++){
        double dist = a[p] - a[p - 1];
        if(dist < p * rem){x += dist; rem -= dist / p;}
        else{x += p * rem; rem = 0; break;}
    }

    double y(0); rem = time;
    for(long p = a.size() - 2; p >= 0; p--){
        double dist = a[p + 1] - a[p];
        double speed = (a.size() - 1 - p);
        if(dist < speed * rem){y += dist; rem -= dist / speed;}
        else{y += speed * rem; rem = 0; break;}
    }
    
    //printf("X:%lf Y:%lf\n", x, y);
    return (x + y <= len);
}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        double n, len; scanf("%lf %lf", &n, &len);
        std::vector<double> a(n + 2, 0);
        for(long p = 1; p <= n; p++){scanf("%lf", &a[p]);}; a[n + 1] = len;

        double left(0), right(1e10), eps(1e-7), res(0.0);
        while(right > left + eps){
            double mid = (left + right) / 2.0;
            //printf("Mid:%Lf Left:%Lf Right:%Lf Diff:%Lf  Compare:%d\n", mid, left, right, (right - left), (right > left + eps));
            if(check(a, len, mid)){res = mid; left = mid;}
            else{right = mid;}
        }

        printf("%.8lf\n", res);
    }

    return 0;
}
