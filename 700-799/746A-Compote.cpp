#include <iostream>

int main(){

    int a, b, c; std::cin >> a >> b >> c;
    int min = a;
    min = (min < (b / 2)) ? min : (b / 2);
    min = (min < (c / 4)) ? min : (c / 4);
    std::cout << (7 * min) << std::endl;

    return 0;
}
