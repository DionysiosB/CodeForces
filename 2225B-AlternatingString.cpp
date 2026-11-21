#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        char prev('_'); int cnt(0);
        for(char x : s){
            cnt += (x == prev);
            if(cnt > 2){break;}
            prev = x;
        }

        std::cout << (cnt <= 2 ? "YES" : "NO") << std::endl;
    }

}
