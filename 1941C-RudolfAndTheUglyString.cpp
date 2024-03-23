#include <iostream>
#include <algorithm>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(0), idx(0);
        while(idx != std::string::npos){
            idx = s.find("mapie", idx);
            if(idx == std::string::npos){break;}
            ++cnt; s[idx + 2] = '$'; ++idx;
        }

        idx = 0;
        while(idx != std::string::npos){
            idx = s.find("map", idx);
            if(idx == std::string::npos){break;}
            ++cnt; s[++idx] = '$';
        }

        idx = 0;
        while(idx != std::string::npos){
            idx = s.find("pie", idx);
            if(idx == std::string::npos){break;}
            ++cnt; s[++idx] = '$'; ++idx;
        }

        std::cout << cnt << std::endl;
    }

}
