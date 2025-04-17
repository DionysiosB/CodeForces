#include <cstdio>
#include <cmath>
 
int main(){
    
    long long a, b; scanf("%lld %lld", &a, &b);
    printf("%lld\n", 12 * a + 14 * a * b + std::abs(a - b) + (a - 3 * b) * b + 2);
}
