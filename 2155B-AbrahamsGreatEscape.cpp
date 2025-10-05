#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        if(k == n * n - 1){std::cout << "NO" << std::endl; continue;}
        std::cout << "YES" << std::endl;
        for(long row = 0; row < n; row++){
            if(k >= n){std::cout << std::string(n, 'U') << std::endl; k -= n;}
            else if(k == n - 1){std::cout << (std::string(k, 'U') + "D") << std::endl; k = 0;}
            else{std::cout << (std::string(k, 'U') + std::string(n - 1 - k, 'R')) + "L" << std::endl; k = 0;}
        }

    }

    return 0;
}
