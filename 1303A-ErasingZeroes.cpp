#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long last(-1), cnt(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '0'){continue;}
            if(last >= 0){cnt += (p - last - 1);}
            last = p;
        }

        std::cout << cnt << std::endl;
    }

    return 0;
}
