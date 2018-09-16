#include <cstdio>

int main(){

    long long l, r, x, y, k; scanf("%lld %lld %lld %lld %lld", &l, &r, &x, &y, &k);
    bool possible = false;
    for(long p = x; p <= y; p++){if(l <= k * p && k * p <= r){possible = true; break;}}
    puts(possible ? "YES" : "NO");

    return 0;
}
