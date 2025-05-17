#include <cstdio>
#include <cmath>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, a, b; scanf("%ld %ld %ld %ld", &n, &m, &a, &b);
        long resA = ceil(log2(std::min(a, n - a + 1))) + ceil(log2(m)) + 1;
        long resB = ceil(log2(n)) + ceil(log2(std::min(b, m - b + 1))) + 1;
        printf("%ld\n", std::min(resA, resB));
    }

}
