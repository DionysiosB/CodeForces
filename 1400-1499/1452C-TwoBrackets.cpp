#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long na(0), nb(0), cnt(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '('){++na;}
            else if(s[p] == '['){++nb;}
            else if(s[p] == ')' && na > 0){++cnt; --na;}
            else if(s[p] == ']' && nb > 0){++cnt; --nb;}
        }
        printf("%ld\n", cnt);
    }

}
