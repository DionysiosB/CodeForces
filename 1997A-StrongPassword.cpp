#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long cut(0);
        for(long p = 1; !cut && p < s.size(); p++){
            if(s[p - 1] == s[p]){cut = p; break;}
        }

        if(!cut){std::cout << (s[0] == 'a' ? 'b' : 'a') << s << std::endl;}
        else{std::cout << (s.substr(0, cut)) << (s[cut - 1] == 'a' ? 'b' : 'a') << s.substr(cut) << std::endl;}
    }

}
