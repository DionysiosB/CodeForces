#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        if(2 * k > n + 1){std::cout << -1 << std::endl; continue;}
        long rem(k);
        for(long p = 0; p < n; p++){
            std::string s(n, '.');
            if(p % 2 == 0 && rem > 0){s[p] = 'R'; --rem;}
            std::cout << s << std::endl;
        }
    }

}
