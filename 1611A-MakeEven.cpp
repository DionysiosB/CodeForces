#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::string ans("2");
        bool has(false); for(long p = 0; p < s.size(); p++){if((s[p] - '0') % 2 == 0){has = true; break;}}
        if(!has){ans = "-1";}
        else if((s.back() - '0') % 2 == 0){ans = "0";}
        else if((s[0] - '0') % 2 == 0){ans = "1";}
        else{ans = "2";}
        std::cout << ans << std::endl;
    }

}
