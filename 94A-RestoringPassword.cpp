#include <cstdio>
#include <iostream>
#include <string>
#include <map>

int main(){

    const int N = 10; const int D = 10; const int L = 8;
    std::string input; getline(std::cin, input);
    std::map<std::string, int> digits;
    for(int k = 0; k < N; k++){
        std::string temp; getline(std::cin, temp);
        digits.insert(std::pair<std::string, int>(temp, k));
    }

    for(int k = 0; k < L; k++){
        std::string temp = input.substr(k * D, D);
        std::cout << digits[temp];
    }
    puts("");

    return 0;
}
