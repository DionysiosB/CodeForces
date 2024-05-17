#include <iostream>

int main(){
    
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin>> s;
        bool diff(false);
        for(long p = 1; !diff && p < s.size(); p++){
            if(s[p - 1] == s[p]){continue;}
            char c = s[p - 1]; s[p - 1] = s[p]; s[p] = c;
            diff = true;
        }

        if(diff){std::cout << "YES\n" << s << std::endl;}
        else{std::cout << "NO" << std::endl;}
    }

}
