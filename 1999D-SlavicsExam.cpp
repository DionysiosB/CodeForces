#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s, u; std::cin >> s >> u;
        long idx(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == u[idx]){++idx;}
            else if(s[p] == '?'){s[p] = (idx < u.size() ? u[idx++] : 'a');}
        }

        if(idx >= u.size()){std::cout << "YES\n" << s << std::endl;}
        else{std::cout << "NO" << std::endl;}
    }

}
