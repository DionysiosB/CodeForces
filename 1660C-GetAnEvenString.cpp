#include <iostream>
#include <set>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long rem(s.size()); std::set<char> obs;
        for(long p = 0; p < s.size(); p++){
            if(obs.count(s[p])){rem -= 2; obs.clear();}
            else{obs.insert(s[p]);}
        }

        std::cout << rem << std::endl;
    }

}
