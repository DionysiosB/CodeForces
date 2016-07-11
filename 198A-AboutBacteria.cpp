#include <iostream>

int main(){
    long long k, b, n, t; std::cin >> k >> b >> n >> t;

    long initial = 1;
    while(k * initial + b <= t && n > 0){initial = k * initial + b; --n;}

    std::cout << n << std::endl;

    return 0;
}
