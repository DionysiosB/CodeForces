#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long ones(0); for(char x : s){ones += (x == '1');}
        std::cout << ones << std::endl;
    }

}
