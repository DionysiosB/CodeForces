#include <iostream>

int main(){

    long n, k; std::cin >> n >> k;
    std::string s("a");
    for(long p = 1; p < k; p++){
        std::string t(2 * p + 1, 'a' + p);
        char c('a');
        for(long u = t.size() - 1; u >= 0; u -= 2){t[u] = c++;}
        //std::cout << p << " ->  " << t << std::endl;
        s += t;
    }

    std::cout << "a";
    for(long p = 0; p < n - 1; p++){std::cout << (s[p % s.size()]);}
    std::cout << std::endl;
}
