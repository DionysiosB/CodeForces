#include <iostream>
#include <algorithm>
 
int main() {
    
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        sort(s.rbegin(), s.rend());
        std::cout << s << std::endl;
    }
 
}
