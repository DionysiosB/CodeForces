#include <iostream>

int main(){

    const long long M = 1000000007;
    std::string x; getline(std::cin, x);
    long long output;
    for(int p = 0; p < x.size(); p++){output = (2 * output + (x[p] - '0')) % M;}
    for(int p = 0; p < x.size() - 1; p++){output = (2 * output) % M;}
    std::cout << output << std::endl;

    return 0;
}
