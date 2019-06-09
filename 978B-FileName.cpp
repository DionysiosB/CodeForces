#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::string s; std::cin >> s;

    long cnt(0), rem(0);
    for(long p = 0; p < s.size(); p++){
        if(s[p] == 'x'){
            if(cnt >= 2){++rem;}
            else{++cnt;}
        }
        else{cnt = 0;}
    }

    std::cout << rem << std::endl;

    return 0;
}
