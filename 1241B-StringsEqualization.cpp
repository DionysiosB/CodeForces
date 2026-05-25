#include <iostream>
#include <set>

int main(){

    long q; std::cin >> q;
    while(q--){
        std::string s, t; std::cin >> s >> t;
        bool possible(false);
        std::set<char> x; for(long p = 0; p < s.size(); p++){x.insert(s[p]);}
        std::set<char> y; for(long p = 0; p < t.size(); p++){y.insert(t[p]);}
        for(std::set<char>::iterator it = x.begin(); it != x.end(); it++){
            if(y.count(*it)){possible = true; break;}
        }

        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

    return 0;
}
