#include <iostream>
#include <set>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::set<long> cs;
        for(long p = 0; p < s.size(); p++){cs.insert(s[p]);}
        const long k = cs.size();
        bool res(true);
        for(long p = k; res && p < s.size(); p++){
            if(s[p - k] != s[p]){res = false;}
        }
        puts(res ? "YES" : "NO");
    }

}
