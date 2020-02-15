#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::string ans;
        if(s.back() == 'o'){ans = "FILIPINO";}
        else if(s.back() == 'u'){ans = "JAPANESE";}
        else if(s.back() == 'a'){ans = "KOREAN";}
        std::cout << ans << std::endl;
    }

    return 0;
}
