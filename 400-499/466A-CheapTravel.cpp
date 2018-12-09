#include <cstdio>

int main(){

    int n,m,a,b; scanf("%d %d %d %d", &n, &m, &a, &b);

    int bundles = n / m; 
    int singles = n % m;

    long total = 0;
    total += bundles * ((m * a < b) ? m * a : b);
    total += (singles * a < b) ? singles * a : b;

    printf("%ld\n", total);

    return 0;
}
