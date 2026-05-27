#include <iostream>

int main(){

    const std::string pattern = "FBFFBFFB";
    const long len = pattern.size();

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        bool res(false);
        for(int fs = 0; fs < len; fs++){
            bool match(true);
            for(long p = 0; match && p < s.size(); p++){
                if(s[p] != pattern[(p + fs) % len]){match = false;}
            }

            if(match){res = true; break;}
        }

        std::cout << (res ? "YES" : "NO") << std::endl;
    }

}
