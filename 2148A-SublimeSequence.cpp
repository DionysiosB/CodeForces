#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, n; scanf("%ld %ld", &x, &n);
        printf("%ld\n", n % 2 ? x : 0);
    }

}
