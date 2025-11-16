#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long mxcnt(0), cnt(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p - 1] == '>' && s[p] == '*'){mxcnt = -1;}
            else if(s[p - 1] == '>' && s[p] == '<'){mxcnt = -1;}
            else if(s[p - 1] == '*' && s[p] == '<'){mxcnt = -1;}
            else if(s[p - 1] == '*' && s[p] == '*'){mxcnt = -1;}
        }

        for(long p = 0; mxcnt >= 0 && p < s.size(); p++){
            if(s[p] == '<'){cnt = 0;}
            else{++cnt; mxcnt = (mxcnt > cnt ? mxcnt : cnt);}
        }

        cnt = 0;
        for(long p = 0; mxcnt >= 0 && p < s.size(); p++){
            if(s[p] == '>'){cnt = 0;}
            else{++cnt; mxcnt = (mxcnt > cnt ? mxcnt : cnt);}
        }
        
        std::cout << mxcnt << std::endl;
    }

}
