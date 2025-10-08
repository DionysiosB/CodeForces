#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::string x(""), y(""), z("");
        if(s[0] == s.back()){x = s[0]; y = s.substr(1, s.size() - 2); z = s.back();}
        else if(s[1] == 'a'){x = s[0]; y = s[1]; z = s.substr(2, s.size() - 2);}
        else{x = s[0]; y = s.substr(1, s.size() - 2); z = s.back();}

        std::cout << x << " " << y << " " << z << std::endl;
    }

}
