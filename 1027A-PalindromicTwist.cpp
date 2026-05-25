#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::string s; std::cin >> n >> s;
        bool possible(true);
        for(long p = 0; 2 * p < n; p++){
            if(s[p] == s[n - 1 - p] || (s[p] - s[n - 1 - p] == 2) || (s[n - 1 - p] - s[p] == 2)){continue;}
            possible = false;
        }

        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

    return 0;
}
