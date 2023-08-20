#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::string x = std::string(s.size(), '(') + std::string(s.size(), ')');
        std::string y(""); for(long p = 0; p < s.size(); p++){y += "()";}

        if(x.find(s) == std::string::npos){std::cout << "YES\n" << x << std::endl;}
        else if(y.find(s) == std::string::npos){std::cout << "YES\n" << y << std::endl;}
        else{std::cout << "NO" << std::endl;}
    }

}
