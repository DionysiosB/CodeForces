#include <cstdio>

int main(){

    long long n, a, b, c, d; scanf("%lld %lld %lld %lld %lld\n", &n, &a, &b, &c, &d);
    long long low(1);
    low = (low > 1 + c - b) ? low : (1 + c - b);
    low = (low > 1 + d - a) ? low : (1 + d - a);
    low = (low > 1 + c + d - a - b) ? low : (1 + c + d - a - b);

    long long high(n);
    high = (high < n + c - b) ? high : (n + c - b);
    high = (high < n + d - a) ? high : (n + d - a);
    high = (high < n + c + d - a - b) ? high : (n + c + d - a - b);

    printf("%lld\n", (high >= low) ? (n * (high - low + 1)) : 0);

    return 0;
}
