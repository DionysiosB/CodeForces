#include <cstdio>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    long f(0), g(0), h(0);
    for(long p = 0; p < k; p++){
        long a; scanf("%ld", &a);
        f += a / 4; a %= 4;
        g += a / 2; a %= 2;
        h += a;
    }

    long pairs = 2 * n + ((n >= f) ? 1 : 2) * (n - f);
    long singles = (n >= f) * (n - f) + (pairs > g) * (pairs - g);
    h += 2 * (g > pairs) * (g - pairs);
    if(h > singles){puts("NO"); return 0;}
    puts("YES");

    return 0;
}
