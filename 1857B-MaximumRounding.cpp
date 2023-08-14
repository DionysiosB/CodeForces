#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long idx(s.size()); bool carry(false);
        for(long p = s.size() - 1; p >= 0; p--){
            if(s[p] >= '5' || (s[p] == '4' && carry)){idx = p; carry = true;}
            else{carry = false;}
        }

        if(idx == s.size()){std::cout << s << std::endl; continue;}

        if(idx == 0){std::cout << "1";}
        else{
            for(long p = 0; p + 1 < idx; p++){std::cout << s[p];}
            std::cout << (char)(++s[idx - 1]);
        }
        for(long p = idx; p < s.size(); p++){std::cout << "0";}
        std::cout << std::endl;
    }

}
