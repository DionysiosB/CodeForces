#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long v(0);
        for(long p = 0; p < s.size(); p++){v += (s[p] - 'a' + 1);}
        long mn = ((s[0] < s.back()) ? s[0] : s.back()) - 'a' + 1;

        if(s.size() == 1){std::cout << "Bob " << mn << std::endl;}
        else{std::cout << "Alice " << (v - 2 * mn * (s.size() % 2)) << std::endl;}
    }

}
