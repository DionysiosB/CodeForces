#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::string t(s);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'U'){t[p] = 'D';}
            else if(s[p] == 'D'){t[p] = 'U';}
        }
        std::cout << t << std::endl;
    }

}
