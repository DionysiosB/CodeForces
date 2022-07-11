#include <cstdio>

int main(){

    long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
    puts((n <= m && n <= k) ? "Yes" : "No");

    return 0;
}
