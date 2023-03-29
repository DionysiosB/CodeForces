#include <iostream>
#include <algorithm>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        sort(s.begin(), s.end());
        int res(0);
        if(s[0] == s[3]){res = -1;}
        else if(s[1] == s[3] || s[0] == s[2]){res = 6;}
        else{res = 4;}
        std::cout << res << std::endl;
    }

}
