#include <cstdio>
#include <cmath>

int main(){

    const long R = 10;
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long s = std::sqrt(n);
        long lb = (s >= R + 1) ? (s - R) : 1;
        long ub = s + R;

        long res(n + 1);
        for(long p = lb; p <= ub; p++){
            long test = (p - 1) + (n + p - 1) / p - 1;
            res = (res < test) ? res : test;
        }
        printf("%ld\n", res);
    }

    return 0;
}
