#include <cstdio>

int main(){

    const int N = 2;

    long x; scanf("%ld\n", &x);

    int ans(0);
    while(x > 0){ans += x % N; x /= N;}
    printf("%d\n", ans);

    return 0;
}
