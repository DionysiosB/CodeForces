#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
        long rownum = (k + n - 1) / n;
        long res = m / (m - rownum + 1);
        printf("%ld\n", res);
    }

}
