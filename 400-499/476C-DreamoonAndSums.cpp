#include <cstdio>
#include <iostream>

int main(){

    const int64_t M = 1000000007;
    int64_t a, b; std::cin >> a >> b;
    //result = (a * b * (b - 1) / 2) + (b * b * (b - 1) * a * (a + 1)) / 4;
    int64_t resultA = (b * (b - 1) / 2) % M; 
    int64_t resultB = (a + ((a * (a + 1)/2) % M) * b) % M;
    int64_t result = (resultA * resultB) % M;
    std::cout << result << std::endl;

    return 0;
}
