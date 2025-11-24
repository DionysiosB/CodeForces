#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);    
    long t; std::cin >> t;
    while(t--){
        long n, x, y; std::cin >> n >> x >> y;
        std::string s; std::cin >> s;
        long a(0), b(0); for(char c : s){a += (c == '4'); b += (c == '8');}
        x = (x > 0 ? x : -x);
        y = (y > 0 ? y : -y);
        long z = (x > y ? x : y);
        bool ans = (z <= a + b) && (x + y <= a + 2 * b);
        std::cout << (ans ? "YES": "NO") << std::endl;
    }
    
}
