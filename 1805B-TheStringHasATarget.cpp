#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        long idx(0); char cur(s[0]);
        for(long p = 1; p < s.size(); p++){if(s[p] <= cur){cur = s[p]; idx = p;}}
        std::cout << s[idx] << s.substr(0, idx) << s.substr(idx + 1, s.size()) << std::endl;
    }

}
