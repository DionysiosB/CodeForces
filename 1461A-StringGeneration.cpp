#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        for(long p = 0; p < n; p++){char x = 'a' + (p % 3); std::cout << x;}
        std::cout << std::endl;
    }

}
