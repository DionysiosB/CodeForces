#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    int t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        if(n % 2){std::cout << "NO" << std::endl; continue;}
        std::cout << "YES" << std::endl;
        for(long p = 0; 2 * p < n; p++){std::cout << ((p % 2) ? "AA" : "BB");}
        std::cout << std::endl;
    }

}
