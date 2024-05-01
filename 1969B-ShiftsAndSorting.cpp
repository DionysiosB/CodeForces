#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long long cnt(0), a(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '0'){cnt += (a > 0) * (a + 1);}
            else{++a;}
        }
        std::cout << cnt << std::endl;
    }

}
