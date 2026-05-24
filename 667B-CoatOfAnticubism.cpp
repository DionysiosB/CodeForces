#include <cstdio>

int main(){

    long n; scanf("%ld\n", &n);
    long max(0), sum(0);
    while(n--){
        long len; scanf("%ld ", &len);
        sum += len;
        max = (len > max) ? len : max;
    }

    printf("%ld\n", 2 * max - sum + 1);

    return 0;
}
