#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){

        long n; scanf("%ld", &n);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x);}
        printf("%ld\n", 3 * n);
        for(long p = 0; p < n; p += 2){
            long u(p + 1), v(p + 2);
            printf("1 %ld %ld\n", u, v);
            printf("1 %ld %ld\n", u, v);
            printf("2 %ld %ld\n", u, v);
            printf("1 %ld %ld\n", u, v);
            printf("1 %ld %ld\n", u, v);
            printf("2 %ld %ld\n", u, v);
        }

    }

}
