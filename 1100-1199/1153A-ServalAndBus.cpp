#include <cstdio>

int main(){

    long n, t; scanf("%ld %ld", &n, &t);
    long ans(n + 1), mn(1e6);
    for(long p = 1; p <= n; p++){
        long s, d; scanf("%ld %ld", &s, &d);
        long w;
        if(s > t){w = s - t;}
        else{w = s + d * ((t - s + d - 1) / d) - t;}
        if(w < mn){ans = p; mn = w;}
    }

    printf("%ld\n", ans);

    return 0;
}
