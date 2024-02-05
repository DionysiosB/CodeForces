#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    std::string ab = "abcdefghijklmnopqrstuvwxyz";
    while(t--){
        long n, k; std::cin >> n >> k;
        for(long p = 0; p < n; p++){std::cout << ab.substr(0, k);}
        std::cout << std::endl;
    }

}
