#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::vector<bool> v(26, 0);
        long idx(s.size());
        for(long p = s.size() - 1; p >= 0; p--){
            if(v[s[p] - 'a']){continue;}
            idx = p;
            v[s[p] - 'a'] = 1;
        }

        std::cout << s.substr(idx) << std::endl;
    }

}
