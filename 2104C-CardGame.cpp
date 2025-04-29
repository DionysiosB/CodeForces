#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        if(s[0] == s.back()){std::cout << (s[0] == 'A' ? "Alice" : "Bob") << std::endl;}
        else if(s[0] == 'A'){
            bool alice(true);
            for(int p = n - 2; alice && p >= 0; p--){if(s[p] == 'B'){alice = false;}}
            std::cout << (alice ? "Alice" : "Bob") << std::endl;
        }
        else{std::cout << (s[n - 2] == 'A' ? "Alice" : "Bob") << std::endl;}
    }

}
