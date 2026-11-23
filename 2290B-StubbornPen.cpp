#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        char cur('R'); long cnt(0);
        for(char x : s){
            if(x != cur){++cnt;}
            else{cur = (cur == 'R' ? 'B' : 'R');}
        }

        std::cout << cnt << std::endl;
    }

}
