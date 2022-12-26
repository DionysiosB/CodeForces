#include <cstdio>

int main(){

    long long n, a, b, c; scanf("%lld %lld %lld %lld", &n, &a, &b, &c);

    n %= 4;
    long long ans(0);
    if(n == 1){
        ans = (c < 3 * a) ? c : (3 * a);
        ans = (ans < (a + b)) ? ans : (a + b);
    }
    else if(n == 2){
        ans = (b < 2 * a) ? b : (2 * a);
        ans = (ans < 2 * c) ? ans : (2 * c);
    }
    else if(n == 3){
        ans = (a < 3 * c) ? a : (3 * c);
        ans = (ans < b + c) ? ans : (b + c);
    }

    printf("%lld\n", ans);

    return 0;
}
