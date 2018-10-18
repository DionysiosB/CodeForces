#include <iostream>

long gcd(int64_t a, int64_t b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    int64_t n, k; std::cin >> n >> k;
    int64_t m = 1; for(int p = 0; p < k; p++){m *= 10;}
    int64_t g = gcd(m, n);
    int64_t res = (n / g) * m;
    std::cout << res << std::endl;

    return 0;
}
