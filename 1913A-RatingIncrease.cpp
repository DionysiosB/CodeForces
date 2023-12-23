#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        bool possible(false);
        long a(0), b(0);
        for(long p = 1; p < s.size(); p++){
            if(s[p] == '0'){continue;}
            a = std::stol(s.substr(0, p));
            b = std::stol(s.substr(p));
            if(a < b){possible = true; break;}
        }

        if(possible){std::cout << a << " " << b << std::endl;}
        else{std::cout << -1 << std::endl;}
    }

}
