#include <iostream>

int64_t gcd(int64_t a, int64_t b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    int64_t n, a, b, p, q; std::cin >> n >> a >> b >> p >> q;
    int64_t lcm = a * b / gcd(a, b);
    int64_t total = p * (n / a) + q * (n / b) - ((p < q ? p : q) * (n / lcm));
    std::cout << total << std::endl;

    return 0;
}
