#include <iostream>
#include <vector>

const int N = 26;

bool diverse(std::string s){

    std::vector<long> cnt(N, 0);
    for(long p = 0; p < s.size(); p++){
        ++cnt[s[p] - 'a'];
        if(2 * cnt[s[p] - 'a'] > s.size()){return false;}
    }

    return true;
}

int main(){

    std::ios_base::sync_with_stdio(false);
    long len(0); std::cin >> len;
    std::string s; std::cin >> s;
    std::string ans("");
    for(long p = 0; p < s.size(); p++){
        if(ans.size()){break;}
        for(long q = 2; q <= len; q++){
            std::string t = s.substr(p, q);
            if(diverse(t)){ans = t; break;}
        }
    }

    if(ans.size()){std::cout << "YES" << std::endl << ans << std::endl;}
    else{std::cout << "NO" << std::endl;}

    return 0;
}
