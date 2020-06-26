#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    printf("%ld\n", 4 + 3 * n);
    puts("0 0"); puts("0 1"); puts("1 0"); puts("1 1");
    for(long p = 0; p < n; p++){
        printf("%ld %ld\n", p + 1, p + 2);
        printf("%ld %ld\n", p + 2, p + 1);
        printf("%ld %ld\n", p + 2, p + 2);
    }

    return 0;
}
