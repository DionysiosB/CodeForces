#include <iostream>
#include <cmath>

int main(){

    long double a, b, c; std::cin >> a >> b >> c;
    long double x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 / a;
    long double x2 = (-b - sqrt(b * b - 4 * a * c)) / 2 / a;
    if(x1 < x2){long double x = x1; x1 = x2; x2 = x;}
    std::cout.precision(15);
    std::cout << std::fixed << x1 << std::endl << std::fixed << x2 << std::endl;

    return 0;
}
