#include<cstdio>
#include<vector>
#include<cmath>

struct point{double x,y;};

double dist(point p1,point p2,point p3){
    double a = p3.y - p1.y;
    double b = p1.x - p3.x;
    double c = -b * p3.y - p3.x * a;
    double r = (a * p2.x + b * p2.y + c) / sqrt(a*a + b*b);
    r = (r > 0) ? r : -r;
    return r;
}


int main(){

    long n; scanf("%ld",&n);
    std::vector<point> v(n);
    for(long p = 0; p < n; p++){scanf("%lf %lf", &v[p].x, &v[p].y);}

    double ans = dist(v[0], v[1], v[2]);
    for(int p = 1; p < n; p++){
        double cand = dist(v[p], v[(p + 1) % n], v[(p + 2) % n]);
        ans = (ans < cand) ? ans : cand;
    }

    printf("%.10lf", ans / 2);
}
