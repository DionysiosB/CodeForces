#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long a(0), b(0);
        while(n--){
            long x; scanf("%ld", &x);
            (x % 2) ? (++a) : (++b);
        }

        printf("%ld\n", a < b ? a : b);
    }

}
