#include <iostream>
#include <vector>
#include <map>


int main(){

    const std::string target = "CODEFORCES";
    std::string source; getline(std::cin, source);
    std::string ans = "NO";


    for(int p = 0; p < source.size(); p++){
        for(int q = p; q < source.size(); q++){
            if(source.substr(0, p) + source.substr(q + 1) == target){std::cout << "YES\n"; return 0;}
        }
    }

    std::cout << "NO\n";

    return 0;
}
