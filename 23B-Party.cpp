#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        printf("%ld\n", n > 2 ? (n - 2) : 0);
    }

    return 0;
}
