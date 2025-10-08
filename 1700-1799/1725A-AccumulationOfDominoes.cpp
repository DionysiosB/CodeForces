#include <cstdio>

int main(){

    long long n, m; scanf("%lld %lld", &n, &m);
    printf("%lld\n", (m > 1) ? n * (m - 1) : (n - 1));

}
