#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long rem(0);
        for(long p = 0; p < s.size(); p++){
            rem += (s[p] == 'Q') - (s[p] == 'A');
            rem = (rem > 0) ? rem : 0;
        }

        std::cout << (rem <= 0 ? "yes" : "no") << std::endl;
    }

}
