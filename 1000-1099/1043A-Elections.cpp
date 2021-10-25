#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long k(0), t(0), m(n); 
    while(m--){long a; scanf("%ld", &a); t += a; k = (k > a) ? k : a;}
    long ans = 1 + 2 * t / n; ans = (ans >= k) ? ans : k;
    printf("%ld\n", ans);

    return 0;
}
