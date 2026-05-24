#include <iostream>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    long n, m, z; std::cin >> n >> m >> z;
    long u = m * n / gcd(m, n);
    std::cout << (z / u) << std::endl;

    return 0;
}
