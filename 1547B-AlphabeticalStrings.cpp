#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long left(-1), right(-1);
        for(long p = 0; p < s.size(); p++){if(s[p] == 'a'){left = right = p; break;}}
        bool possible(left >= 0);
        for(long p = 1; possible && p < s.size(); p++){
            char x = 'a' + p;
            if(left > 0 && s[left - 1] == x){--left;}
            else if(right + 1 < s.size() && s[right + 1] == x){++right;}
            else{possible = false;}
        }

        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

}
