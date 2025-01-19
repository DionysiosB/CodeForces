#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, d, e; scanf("%ld %ld %ld %ld", &a, &b, &d, &e);
        int fa = (d == a + 2 * b) + (e == 2 * a + 3 * b);
        int fb = (e == a + b + d) + (2 * d == b + e);
        printf("%d\n", 1 + (fa > fb ? fa : fb));
    }

}
