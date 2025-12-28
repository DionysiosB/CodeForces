#include <iostream>
 
int main(){
    
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        int cnt(0);
        for(char x : s){if(x == 'Y'){++cnt;}}
        std::cout << (cnt <= 1 ? "YES" : "NO") << std::endl;
        
    }
    
}
