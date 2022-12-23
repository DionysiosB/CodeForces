#include <cstdio>

long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long g(0), mx(0);
        bool z(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(!x){z = true;}
            g = gcd(g, x);
            mx = (mx > x) ? mx : x;
        }

        printf("%ld\n", z + (mx / g));
    }


}
