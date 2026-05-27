#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        bool v[26] = {0};
        long total(0);
        for(long p = 0; p < s.size(); p++){
            int idx = s[p] - 'A';
            total += 2 - v[idx];
            v[idx] = 1;
        }

        std::cout << total << std::endl;
    }

}
