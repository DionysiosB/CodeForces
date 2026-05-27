#include <iostream>
#include <set>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::set<std::string> dc;
        bool res(false); std::string last("");
        for(long p = 0; !res && p + 1 < s.size(); p++){
            std::string u = s.substr(p, 2);
            if(dc.count(u) && last != u){res = true;}
            else{dc.insert(u); last = (last != u) ? u : "";}
        }

        std::cout << (res ? "YES" : "NO") << std::endl;

    }

}
