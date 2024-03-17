#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cs(0);
        while(n--){
            long x; scanf("%ld", &x);
            cs += (x > 0 ? x : -x);
        }

        printf("%ld\n", cs);
    }

}
