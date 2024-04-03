#include <iostream>
#include <string>

int main(){
    
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        int h = std::stoi(s.substr(0, 2));
        bool pm(false);
        pm = (h >= 12);
        if(h == 0){h = 12;}
        else if(h > 12){h -= 12;}

        std::string t("");
        if(h < 10){t = "0";}
        t += std::to_string(h);
        t += s.substr(2);
        t += pm ? " PM" : " AM";
        std::cout << t << std::endl;
    }

}
