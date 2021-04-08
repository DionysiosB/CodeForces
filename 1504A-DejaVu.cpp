#include <iostream>

bool isPalindrome(std::string x){
    for(long p = 0; 2 * p <= x.size(); p++){if(x[p] != x[x.size() - 1 - p]){return false;}}
    return true;
}



int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        bool possible(false);
        for(long p = 0; p < s.size(); p++){if(s[p] !='a'){possible = true; break;}}
        std::string res = s + 'a';
        if(isPalindrome(res)){res = 'a' + s;}

        if(possible){std::cout << "YES\n" << res << std::endl;}
        else{std::cout << "NO" << std::endl;}
    }

}
