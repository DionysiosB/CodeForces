#include <cstdio>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        long long n; scanf("%lld\n", &n);
        long long res = n * (n + 1) / 2;
        
        long long x = 1;
        while(x <= n){res -= 2 * x; x *= 2;}
        printf("%lld\n", res);
    }

    return 0;
}
