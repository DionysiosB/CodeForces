#include <cstdio>
#include <vector>

long max(long x, long y){return (x > y) ? x : y;}

int main(){

    const long N = 2000007;
    std::vector<long> a(N), b(N);
    long n; scanf("%ld", &n);
    while(n--){long x; scanf("%ld", &x); a[x] = x;}
    for(long p = 1; p < N; p++){b[p] = max(b[p - 1], a[p]);}
    long res(0);
    for(long p = 2; p < N; p++){
        if(!a[p]){continue;}
        for(long q = 2 * p; q < N; q += p){res = max(res, b[q - 1] % a[p]);}
    }

    printf("%ld\n", res);

    return 0;
}
