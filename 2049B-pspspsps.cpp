#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        if(s[0] == 's'){s[0] = '.';}
        if(s.back() == 'p'){s.back() = '.';}
        bool fs(0), fp(0);
        for(long p = 0; p < s.size() && !(fs && fp); p++){
            if(s[p] == 's'){fs = true;}
            else if(s[p] == 'p'){fp = true;}
        }
        
        std::cout << (fs && fp ? "NO" : "YES") << std::endl;
    }
    
}
