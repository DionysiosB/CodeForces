#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long a(0), z(0);
        for(long p = 0; p < 2 * n; p++){
            int x; scanf("%d", &x);
            a += x;
            z += (!x);
        }

        printf("%ld %ld\n", (a % 2), (a < z ? a : z));
    }

}
