#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        bool possible(true);
        for(long p = 0; p < s.size(); p++){
            if(s[p] != '?'){
                if(p > 0 && s[p - 1] == s[p]){possible = false; break;}
                else{continue;}
            }
            for(int q = 0; q < 3; q++){
                char cand = 'a' + q;
                if(p > 0 && cand == s[p - 1]){continue;}
                if(p + 1 < s.size() && cand == s[p + 1]){continue;}
                s[p] = cand; break;
            }
        }

        if(possible){std::cout << s << std::endl;}
        else{std::cout << "-1" << std::endl;}
    }

    return 0;
}
