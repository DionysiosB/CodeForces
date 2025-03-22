#include <iostream>
#include <algorithm>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;

        std::string s; std::cin >> s;
        std::string t(s); std::reverse(t.begin(),t.end());

        bool res(s < t);
        bool diff(false);
        for(size_t p = 1; !res && k && !diff && p < s.size(); p++){if(s[p - 1] != s[p]){diff = true;}}
        if(k && diff){res = true;}

        std::cout << (res ? "YES" : "NO") << std::endl;
    }

}
