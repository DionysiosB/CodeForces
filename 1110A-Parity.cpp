#include <cstdio>
#include <vector>

int main(){

    long b, k; scanf("%ld %ld", &b, &k);
    std::vector<long> a(k); for(long p = 0; p < k; p++){scanf("%ld", &a[p]);}
    long parity(a[k - 1] % 2);
    for(long p = 0; p < k - 1; p++){parity += (a[p] % 2) * (b % 2);}
    parity %= 2;
    puts(parity ? "odd" : "even");

    return 0;
}
