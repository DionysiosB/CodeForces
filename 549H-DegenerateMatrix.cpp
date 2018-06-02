#include <cstdio>
#include <iostream>

int main(){
    int64_t a, b, c, d; scanf("%lld %lld %lld %lld\n", &a, &b, &c, &d);
    int64_t det = std::abs(a * d - b * c);
    double k = std::max(std::max(std::abs(a + b + c + d), std::abs(a - b + c - d)), std::max(std::abs(a - b - c + d), std::abs(a + b - c - d)));
    printf("%.9f\n", k ? det / k : 0.0);

    return 0;
}
