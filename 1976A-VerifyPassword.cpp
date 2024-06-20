#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        bool inc(true);
        for(long p = 1; inc && p < n; p++){
            if(s[p - 1] > s[p]){inc = false;}
        }

        std::cout << (inc ? "YES" : "NO") << std::endl;
    }

}
