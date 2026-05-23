#include <cstdio>
#include <iostream>

int main(){

    int n; scanf("%d\n", &n);
    std::string s; getline(std::cin, s);
    std::string ans = "no";

    for(int b = 0; b < s.size(); b++){
        if(ans == "yes"){break;}
        if(s[b] == '.'){continue;}
        for(int j = 1; j < s.size(); j++){
            bool possible = 1;
            for(int u = 1; u <= 4; u++){if(b + u * j >= s.size() || s[b + u * j] == '.'){possible = 0; break;}}
            if(possible){ans = "yes"; break;}
        }
    }

    std::cout << ans << std::endl;


    return 0;
}
