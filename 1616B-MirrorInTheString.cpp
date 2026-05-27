#include <iostream>
#include <iterator>
#include <algorithm>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s; s += 'z';
        std::string v(2,s[0]);
        long len(0); for(long p = 0; p + 1 < s.size(); p++){len = p + 1; if(s[p] < s[p + 1]){break;};}
        std::string t(s.substr(0, len)); std::string w(t); std::reverse(t.begin(), t.end()); w = w + t;
        if(w < v){std::cout << w << std::endl;}
        else{std::cout << v << std::endl;}
    }

}
