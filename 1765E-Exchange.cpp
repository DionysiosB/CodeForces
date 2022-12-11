#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, a, b; scanf("%ld %ld %ld", &n, &a, &b);
        printf("%ld\n", a <= b ? ((n + a - 1) / a) : 1);
    }

}
