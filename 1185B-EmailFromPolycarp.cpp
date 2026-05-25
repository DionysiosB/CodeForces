#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    while(n--){
        std::string s; std::cin >> s;
        std::string t; std::cin >> t;
        bool possible = true;
        long idx(0);
        for(long p = 0; p < t.size(); p++){
            if(s[idx] == t[p]){++idx;}
            else if(p > 0 && t[p] == t[p - 1]){}
            else{possible = false; break;}
        }
        if(idx < s.size()){possible = false;}
        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

    return 0;
}
