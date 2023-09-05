#include <iostream>

int main(){

    std::string s; std::cin >> s;
    bool left(false); int action(0);
    long cnt(0);
    for(long p = 0; p < s.size(); p++){
        if(s[p] == '('){left = true;}
        else if(s[p] == ')' && left){action = 1;}
        cnt += (s[p] == ')');
    }

    std::cout << action << std::endl;
    if(action){
        std::cout << cnt << std::endl;
        for(long p = 0; p < s.size(); p++){if(s[p] == ')'){std::cout << (p + 1) << " ";}}
        std::cout << std::endl;
    }
    
    return 0;
}
