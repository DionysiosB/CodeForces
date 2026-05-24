#include <cstdio>

int main(){

    long hh, mm; scanf("%ld %ld", &hh, &mm);
    long h, d, c, n; scanf("%ld %ld %ld %ld", &h, &d, &c, &n);

    double cost(0.0);
    if(hh >= 20){cost = ((h + n - 1)/ n) * c * 0.8;}
    else{

        long dur = 20 * 60 - (hh * 60 + mm);

        long cnow = ((h + n - 1) / n) * c;
        long cafter = ((h + dur * d + n - 1) / n) * c * 0.8;
        cost = (cnow < cafter) ? cnow : cafter;
    }

    printf("%.5lf\n", cost);

    return 0;
}
