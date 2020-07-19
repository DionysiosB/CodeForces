#include <iostream>

int main(){

    const std::string g = "abacaba";
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long idx(-1);
        for(long p = 0; p + g.size() <= s.size(); p++){if(s.substr(p, g.size()) == g){idx = p; break;}}

        for(long b = 0; b + g.size() <= s.size(); b++){
            if(idx >= 0){break;}
            bool cur(true);
            for(long p = 0; p < g.size(); p++){if(s[b + p] != '?' && s[b + p] != g[p]){cur = false; break;}}
            if(cur){idx = b; break;}
        }

        bool res = (idx >= 0);
        if(res){
            for(long p = 0; p < g.size(); p++){s[idx + p] = g[p];}
            for(long p = 0; p < s.size(); p++){s[p] = (s[p] == '?') ? 'z' : s[p];}
        }

        long cnt(0);
        for(long p = 0; p < s.size(); p++){cnt += (s.substr(p, g.size()) == g);}
        if(cnt > 1){res = false;}

        std::cout << (res ? "Yes" : "No") << std::endl;
        if(res){std::cout << s << std::endl;}
    }

    return 0;
}
