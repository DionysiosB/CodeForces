#include <iostream>
 
int main(){
    
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        for(long p = 1; p < n; p++){
            std::string x; std::cin >> x;
            std::string a(s + x), b(x + s);
            s = (a < b ? a : b);
        }

        std::cout << s << std::endl;
    }
    
}
