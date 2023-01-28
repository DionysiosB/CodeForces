#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    const std::string pi = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

    long t; std::cin >> t;
    while(t--){
        std::string x; std::cin >> x;
        long cnt(0);
        for(long p = 0; p < x.size(); p++){
            if(x[p] == pi[p]){++cnt;}
            else{break;}
        }
        std::cout << cnt << std::endl;
    }

}
