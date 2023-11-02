#include <cstdio>
#include <vector>
#include <cmath>

double dist(std::pair<double, double> u, std::pair<double, double> v){
    return std::sqrt((u.first - v.first) * (u.first - v.first)  + (u.second - v.second) * (u.second - v.second)); 
}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        std::pair<double, double> h, a, b; 
        scanf("%lf %lf", &h.first, &h.second);
        scanf("%lf %lf", &a.first, &a.second);
        scanf("%lf %lf", &b.first, &b.second);

        double za = dist(std::pair<double, double>(0.0, 0.0), a);
        double zb = dist(std::pair<double, double>(0.0, 0.0), b);
        double ha = dist(h, a);
        double hb = dist(h, b);
        double ab = dist(a, b); ab /= 2.0;

        double res = (za > ha) ? za : ha;   //only A, 0->A->H
        double cand = (zb > hb) ? zb : hb; res = (res < cand) ? res : cand; //Only B, 0->B->H
        cand = (za > ab) ? za : ab; cand = (cand > hb) ? cand : hb; res = (cand < res) ? cand : res; //0->A->B->H
        cand = (zb > ab) ? zb : ab; cand = (cand > ha) ? cand : ha; res = (cand < res) ? cand : res; //0->B->A->H
        printf("%.8lf\n", res);
    }

}
