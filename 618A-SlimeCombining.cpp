#include <iostream>
#include <vector>

int main(){

    long n; std::cin >> n;
    std::vector<bool> digits;
    while(n > 0){digits.push_back(n % 2); n /= 2;}
    for(int p = digits.size() - 1; p >= 0; p--){if(digits[p]){std::cout << (p + 1) << " ";}}
    std::cout << std::endl;

    return 0;
}
