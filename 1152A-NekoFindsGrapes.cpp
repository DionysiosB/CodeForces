#include <cstdio>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    long cv(0), cd(0), kv(0), kd(0); 
    for(long p = 0; p < n; p++){long a; scanf("%ld", &a); (a % 2) ? (++cd) : (++cv);}
    for(long p = 0; p < m; p++){long b; scanf("%ld", &b); (b % 2) ? (++kd) : (++kv);}
    long cntA = (cv < kd) ? cv : kd;
    long cntB = (cd < kv) ? cd : kv;
    printf("%ld\n", cntA + cntB);

    return 0;
}
