#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, d, e; scanf("%ld %ld %ld %ld", &a, &b, &d, &e);
        int f1 = (d == a + 2 * b) + (e == a + b + d);
        int f2 = (d == a + 2 * b) + (2 * d == b + e);
        int f3 = (e == a + b + d) + (2 * d == b + e);
        int f = (f1 > f2 ? f1 : f2);
        f = (f > f3 ? f : f3);
        printf("%d\n", 1 + f);
    }

}
