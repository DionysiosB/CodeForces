#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        bool seen[26] = {0};
        bool res(true);
        for(long p = 0; p < s.size(); p++){
            if(p == 0 || s[p] != s[p - 1]){
                if(seen[s[p] - 'A']){res = false; break;}
                else{seen[s[p] - 'A'] = true;}
            }
        }

        std::cout << (res ? "YES" : "NO") << std::endl;
    }

}
