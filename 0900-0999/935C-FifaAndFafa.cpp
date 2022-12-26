#include <cstdio>
#include <cmath>

double getDist(double x1, double y1, double x2, double y2){
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main(){

    double R, x1, y1, x2, y2; scanf("%lf %lf %lf %lf %lf", &R, &x1, &y1, &x2, &y2);
    double d1 = getDist(x1, y1, x2, y2);
    double r = 0.5 * (d1 + R);

    double xa, ya, xb, yb;
    if(d1 >= R){xa = xb = x1; ya = yb = y1; r = R;}
    else if(x1 != x2){
        double tan = (y2 - y1) / (x2 - x1);
        xa = x2 + r / sqrt(tan * tan + 1);
        xb = x2 - r / sqrt(tan * tan + 1);
        ya = y2 + tan * r / sqrt(tan * tan + 1);
        yb = y2 - tan * r / sqrt(tan * tan + 1);
    }
    else{xa = xb = x2; ya = y2 - r; yb = y2 + r;}

    double dista = getDist(x1, y1, xa, ya);
    double distb = getDist(x1, y1, xb, yb);

    if(dista < distb){printf("%.9lf %.9lf %.9lf\n", xa, ya, r);}
    else{printf("%.9lf %.9lf %.9lf\n", xb, yb, r);}

    return 0;
}
