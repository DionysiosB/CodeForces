#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long left(0), right(s.size() - 1);
        while((left < right) && (s[left] != s[right])){++left; --right;}
        std::cout << (right - left + 1) << std::endl;
    }

}
