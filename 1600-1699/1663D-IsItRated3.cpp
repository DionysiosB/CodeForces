#include <iostream>

int main(){

    std::string s; std::cin >> s;
    long x; std::cin >> x;
    puts( ((s == "ABC" && x < 2000) || (s == "ARC" && x < 2800) || (s == "AGC" && x >= 1200)) ? "yes" : "no");
}
