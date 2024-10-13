#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::string s; std::cin >> s;
        
        bool chg(true);
        while(chg && m--){
            std::string t(s); chg = false;
            for(long p = 0; p < t.size(); p++){
                if(t[p] == '1'){continue;}
                bool prev = (p > 0 ? (s[p - 1] == '1') : 0);
                bool nxt  = (p < n ? (s[p + 1] == '1') : 0);
                if(prev ^ nxt){t[p] = '1'; chg = true;}
            }
            s = t;
        }

        std::cout << s << std::endl;
    }

}
