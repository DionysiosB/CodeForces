#include <cstdio>
#include <algorithm>
 
int main() {
    
    long t; scanf("%ld", &t);
    while(t--){
        long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
        long d((m+1)/3);
        long y(std::min(d, std::min(k-1, n-k)));
        long x((m+1-y)/2);
        printf("%ld\n", std::min(x + y + 1, n));
    }
}
