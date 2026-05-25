#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long x; std::cin >> x;
        std::string w(s.size(), '1');
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '1'){continue;}
            if(p - x >= 0){w[p - x] = '0';}
            if(p + x < w.size()){w[p + x] = '0';}
        }

        for(long p = 0; p < s.size(); p++){
            if(s[p] == '0'){continue;}
            if(p - x >= 0 && w[p - x] == '1'){continue;}
            if(p + x < w.size() && w[p + x] == '1'){continue;}
            w = "-1"; break;
        }

        std::cout << w << std::endl;
    }

    return 0;
}
