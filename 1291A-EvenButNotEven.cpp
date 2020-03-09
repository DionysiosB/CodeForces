#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(0);
        for(long p = 0; p < s.size(); p++){cnt += ((s[p] - '0') % 2);}
        if(cnt < 2){std::cout << "-1" << std::endl; continue;}  
        long pos(n - 1); cnt %= 2;
        for(long p = s.size() - 1; p >= 0; p--){
            if((s[p] - '0') % 2 == 0){continue;}
            if(cnt){cnt = 0;}
            else{pos = p; break;}
        }

        for(long p = 0; p <= pos; p++){std::cout << s[p];}
        std::cout << std::endl;
    }

    return 0;
}
