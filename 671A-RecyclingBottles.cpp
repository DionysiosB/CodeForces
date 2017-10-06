#include <iostream>
#include <iomanip>
#include <cmath>

double dist(double x1, double y1, double x2, double y2){
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main(){

    double ax, ay, bx, by, tx, ty; 
    scanf("%lf %lf %lf %lf %lf %lf", &ax, &ay, &bx, &by, &tx, &ty);
    long n; scanf("%ld", &n);
    double binTotal(0), fa(0), fb(0), init(1e10);
    for(long p = 0; p < n; p++){
        double u, v; scanf("%lf %lf", &u, &v);
        double da = dist(ax, ay, u, v);
        double db = dist(bx, by, u, v);
        double dt = dist(tx, ty, u, v);
        binTotal += 2 * dt;
        da -= dt; db -= dt;
        init = (da + fb < init) ? (da + fb) : init;
        init = (db + fa < init) ? (db + fa) : init;
        fa = (da < fa) ? da : fa;
        fb = (db < fb) ? db : fb;
    }

    double ans = init + binTotal;
    std::cout << std::setprecision(15) << ans << std::endl;

    return 0;
}
