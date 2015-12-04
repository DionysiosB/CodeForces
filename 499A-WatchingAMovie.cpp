#include <cstdio>

int main(){

    long n, x; scanf("%ld %ld\n", &n, &x);

    long current(0), total(0);

    while(n--){
        long l, r; scanf("%ld %ld\n", &l, &r);
        total += (r - l + 1) + ((l - current - 1) % x);
        current = r;
    }

    printf("%ld\n", total);

    return 0;
}
