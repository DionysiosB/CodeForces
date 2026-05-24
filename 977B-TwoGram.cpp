#include <iostream>
#include <map>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::string s; std::cin >> n >> s;
    std::map<std::string, long> m;
    for(long p = 0; p + 1 < s.size(); p++){
        std::string t = s.substr(p, 2);
        ++m[t];
    }

    std::string ans(""); long mx(0);
    for(std::map<std::string, long>::iterator it = m.begin(); it != m.end(); it++){
        if(it->second > mx){ans = it->first; mx = it->second;}
    }

    std::cout << ans << std::endl;

    return 0;
}
