#include <cstdio>
#include <vector>

long mabs(long x){return (x > 0) ? x : -x;}

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

    long mn(1e9);
    for(long x = 0; x < n; x++){
        long sum(0);
        for(long p = 0; p < n; p++){sum += 2 * a[p] * (mabs(p - x) + p + mabs(x));}
        mn = (mn < sum) ? mn : sum;
    }

    printf("%ld\n", mn);

    return 0;
}
