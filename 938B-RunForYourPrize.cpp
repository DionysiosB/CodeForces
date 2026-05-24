#include <cstdio>
#include <vector>

long mymax(long x, long y){return (x > y) ? x : y;}

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n + 2); for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}
    a[0] = 1; a[n + 1] = 1e6;
    long mn(1e7);
    for(long p = 0; p <= n; p++){
        long cand = mymax((a[p] - 1) , (1e6 - a[p + 1]));
        mn = (mn < cand) ? mn : cand;
    }

    printf("%ld\n", mn);

    return 0;
}
