#include <iostream>
#include <vector>
#include <set>

int main(){

    std::set<std::string> suf;
    std::string s; std::cin >> s;
    long sz = s.size();
    std::vector<std::vector<bool> > dp(s.size() + 10, std::vector<bool>(4, 0));
    dp[sz][2] = dp[sz][3] = true;
    s += "##";
    for(long p = sz - 2; p > 4; p--){
        for(long len = 2; len <= 3; len++){
            dp[p][len] = ((dp[p + len][len] && s.substr(p, len) != s.substr(p + len, len)) || dp[p + len][5 - len]);
            if(dp[p][len]){suf.insert(s.substr(p, len));}
        }
    }

    std::cout << suf.size() << std::endl;
    for(std::set<std::string>::iterator it = suf.begin(); it != suf.end(); it++){std::cout << (*it) << std::endl;}

    return 0;
}
