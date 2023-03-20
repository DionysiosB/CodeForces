#include <iostream>

int main(){

    const std::string cs = "meow";

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long idx(0); bool iscat(s[0] == 'm' || s[0] == 'M');
        for(long p = 0; iscat && p < s.size(); p++){
            if('A' <= s[p] && s[p] <= 'Z'){s[p] += ('a' - 'A');}
            if(s[p] == cs[idx]){continue;}
            else if((idx + 1 < cs.size()) && s[p] == cs[idx + 1]){++idx;}
            else{iscat = false;}
        }

        iscat = iscat && (idx == 3);
        std::cout << (iscat ? "YES" : "NO") << std::endl;
    }

}
