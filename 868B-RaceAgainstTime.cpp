#include <cstdio>

int main(){

    double h, m, s, t1, t2; scanf("%lf %lf %lf %lf %lf", &h, &m, &s, &t1, &t2);

    double da = 6 * s; if(da > 360){da -= 360;}
    double db = 6 * (m + s / 60.0); if(db > 360){da -= 360;}
    double dc = 30 * (h + m / 60.0 + s / 3600.0); if(dc > 360){dc -= 360;}

    double u = 30 * t1;
    double v = 30 * t2;
    if(v < u){double x = u; u = v; v = x;}

    bool possible(false);
    if((u < da && da < v) && (u < db && db < v) && (u < dc && dc < v)){possible = true;}
    if((!(u < da && da < v)) && (!(u < db && db < v)) && (!(u < dc && dc < v))){possible = true;}


    puts(possible ? "YES" : "NO");

    return 0;
}
