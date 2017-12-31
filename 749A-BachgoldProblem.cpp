#include <iostream>

int main(){

    long n; std::cin >> n;
    bool three(false);
    if(n % 2){three = true; n -= 3;}
    long twos = n / 2;
    long count = twos + three;
    std::cout << count << std::endl;
    while(twos--){std::cout << "2 ";}
    if(three){std::cout << "3";}
    std::cout << std::endl;

    return 0;
}
