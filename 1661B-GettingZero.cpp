#include <cstdio>

int main(){

    const long B = 15;
    const long MOD = 32768;
    long n; scanf("%ld", &n);
    while(n--){
        long res(100);
        long x; scanf("%ld", &x);
        for(long p = 0; p <= B; p++){
            long y = x + p;
            for(long q = 0; q <= B; q++){
                long steps = p + q;
                if(y % MOD == 0){res = (res < steps) ? res : steps;}
                y *= 2;
            }
        }

        printf("%ld ", res);
    }

    puts("");

}
