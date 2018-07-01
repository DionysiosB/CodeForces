#include <cstdio>

int main(){

    long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
    long n; scanf("%ld", &n);
    long count(0);
    while(n--){long x; scanf("%ld", &x); count += ((b < x) && (x < c));}
    printf("%ld\n", count);

    return 0;
}
