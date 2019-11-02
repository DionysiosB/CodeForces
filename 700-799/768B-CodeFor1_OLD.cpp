#include <iostream>

std::string f(int64_t x){

    if(x == 0){return "0";}
    if(x == 1){return "1";}
    char middle = '0' + (x % 2);
    return f(x/2) + middle + f(x / 2);
}


int main(){

    int64_t n, l, r; std::cin >> n >> l >> r;
    std::string s = f(n);
    int64_t count(0);
    for(long p = l - 1; p < r; p++){count += (s[p] - '0');}
    std::cout << count << std::endl;

    return 0;
}
