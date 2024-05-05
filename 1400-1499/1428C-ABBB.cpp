#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::vector<char> v;
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'A' || v.empty()){v.push_back(s[p]);}
            else{v.pop_back();}
        }

        std::cout << v.size() << std::endl;
    }

    return 0;
}
