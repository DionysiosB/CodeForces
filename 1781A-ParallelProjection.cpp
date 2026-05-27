#include <cstdio>

long myabs(long x){return (x > 0 ? x : -x);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long w, d, h; scanf("%ld %ld %ld", &w, &d, &h);
        long a, b, f, g; scanf("%ld %ld %ld %ld", &a, &b, &f, &g);
        long distA = g + myabs(f - a) + b;
        long distB = (d - g) + myabs(f - a) + (d - b);
        long distC = f + a + myabs(g - b);
        long distD = (w - f) + (w - a) + myabs(g - b);

        long dist = (distA < distB) ? distA : distB;
        dist = (dist < distC) ? dist : distC;
        dist = (dist < distD) ? dist : distD;

        printf("%ld\n", h + dist);
    }

}
