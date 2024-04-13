#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
        long need = (m - 1) * (n / m) + (n % m > 0) * (n % m - 1);
        puts(k < need ? "YES" : "NO");
    }

}
