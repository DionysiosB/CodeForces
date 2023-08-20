#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long m, k, a, b; scanf("%ld %ld %ld %ld", &m, &k, &a, &b);

        long x = m / k; long rs = m % k;
        long fs = rs - a; fs = (fs > 0) ? fs : 0;
        long ls = a - rs; ls = (ls > 0) ? ls : 0;
        long fk = x - b;  fk = (fk > 0) ? fk : 0;
        long cnt = fs + fk - (ls / k < fk ? (ls /k) : fk);
        printf("%ld\n", cnt);
    }

}
