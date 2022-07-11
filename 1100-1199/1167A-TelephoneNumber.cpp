#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        bool start(false); long cnt(0);
        for(long p = 0; p < n; p++){
            if(!start && s[p] == '8'){start = true; cnt = 1;}
            else if(start){++cnt;}
        }

        std::cout << ((cnt >= 11) ? "YES" : "NO") << std::endl;
    }

    return 0;
}
