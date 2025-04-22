#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long inv(s[0] == '1');
        for(long p = 1; p < s.size(); p++){inv += (s[p - 1] != s[p]);}
        if(inv == 2){inv = 1;}
        else if(inv > 2){inv -= 2;}
        std::cout << (s.size() + inv) << std::endl;
    }

}
