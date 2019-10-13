#include <cstdio>
#include <vector>

int main(){

    long n, x, y; scanf("%ld %ld %ld", &n, &x, &y);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    long ans(0);
    for(long p = 0; p < n; p++){
        long least(true);
        for(long u = 1; least && (u <= x); u++){if(p - u >= 0 && a[p - u] < a[p]){least = false;}}
        for(long u = 1; least && (u <= y); u++){if(p + u < n && a[p + u] < a[p]){least = false;}}
        if(least){ans = p + 1; break;}
    }

    printf("%ld\n", ans);

    return 0;
}
