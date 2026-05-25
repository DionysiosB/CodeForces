#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long b, u, v; scanf("%ld %ld %ld", &b, &u, &v);
        long h, c; scanf("%ld %ld", &h, &c);

        long na = (h > c) ? u : v;
        long ma = (h > c) ? h : c;

        long nb = (h < c) ? u : v;
        long mb = (h < c) ? h : c;

        long ga = (b > 2 * na) ? na : (b / 2);
        b -= 2 * ga;
        long gb = (b > 2 * nb) ? nb : (b / 2);
        long f = ga * ma + gb * mb;

        printf("%ld\n", f);
    }

    return 0;
}
