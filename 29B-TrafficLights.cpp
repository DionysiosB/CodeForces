#include <cstdio>

int main(){

    long l, d, v, g, r; scanf("%ld %ld %ld %ld %ld", &l, &d, &v, &g, &r);

    double t1 = 1.0 * d / v;
    double t2 = 1.0 * (l - d) / v;
    
    long u = t1 / (g + r); double tl = t1 - u * (g + r);
    if(tl >= g){t1 = (u + 1) * (g + r);}

    printf("%.7lf\n", t1 + t2);

    return 0;
}
