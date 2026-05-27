#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(0);
        for(long p = 0; p < s.size(); p++){cnt += (s[p] == '0');}
        if(cnt == 1){std::cout << "BOB" << std::endl;}
        else if(cnt % 2){std::cout << "ALICE" << std::endl;}
        else{std::cout << "BOB" << std::endl;}
    }
}
