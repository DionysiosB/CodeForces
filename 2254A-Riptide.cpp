#include <cstdio>
#include <algorithm>
 
int main() {
    
    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        long ans = std::min(std::abs(a - b), std::min(std::abs(b - c), std::abs(c - a)));
        printf("%ld\n", ans);
    }
 
}
