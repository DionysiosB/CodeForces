#include <iostream>
int main(){
    long long k, b, n, t; std::cin >> k >> b >> n >> t;
    for(long long s = k + b; s <= t && n > 0; s = k * s + b, --n);
    std::cout << n;
}
