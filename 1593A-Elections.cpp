#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        long mx = (a > b) ? a : b; mx = (mx > c) ? mx : c;
        bool tie = (((a == mx) + (b == mx) + (c == mx)) > 1);
        long u = (a == mx) ? tie : (mx + 1 - a);
        long v = (b == mx) ? tie : (mx + 1 - b);
        long w = (c == mx) ? tie : (mx + 1 - c);
        printf("%ld %ld %ld\n", u, v, w);
    }

}
