#include <iostream>
#include <vector>

int main(){

    long n; std::cin >> n;
    std::vector<long> a;

    for(long p = 1; p <= n; p++){a.push_back(p); n -= p;}
    for(long p = a.size() - 1; p >= 0 && n > 0; p--){++a[p]; --n;}

    std::cout << a.size() << std::endl;
    for(long p = 0; p < a.size(); p++){std::cout << a[p] << " ";}
    std::cout << std::endl;

    return 0;
}
