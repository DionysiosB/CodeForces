#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    while(n--){
        long x; scanf("%ld", &x);
        printf("%ld ", (x % 2) ? x : (x - 1));
    }
    puts("");

    return 0;
}
