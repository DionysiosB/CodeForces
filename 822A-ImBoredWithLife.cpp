#include <iostream>

int main(){

    int64_t a, b; std::cin >> a >> b;
    int64_t g(1);
    for(long p = 1; (p <= a) && (p <= b); p++){g *= p;}
    std::cout << g << std::endl;

    return 0;
}
