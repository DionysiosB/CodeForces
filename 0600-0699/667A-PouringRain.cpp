#include <cstdio>

const double PI = 3.141592653589793238462643383;

int main(){

    long d, h, v, e; scanf("%ld %ld %ld %ld\n", &d, &h, &v, &e);
    if(4 * v <= PI * d * d * e){puts("NO");}
    else{puts("YES"); printf("%.7lf\n", (PI * d * d * h) / (4 * v - PI * d * d * e));}

    return 0;
}
