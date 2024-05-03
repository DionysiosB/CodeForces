#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        bool a(false);
        for(long p = 0; p < s.size(); p++){if(s[p] == 'U'){a = !a;}}
        std::cout << (a ? "YES" : "NO") << std::endl;
    }

}
