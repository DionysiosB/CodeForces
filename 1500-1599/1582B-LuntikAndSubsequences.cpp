#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long a(0), z(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            z += (x == 0);
            a += (x == 1);
        }

        long long res = (1LL << z) * a;
        printf("%lld\n", res);
    }

}
