#include <iostream>

int main(){

    long q; std::cin >> q;
    while(q--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        std::string ans;
        for(int x = '0'; x <= '9'; x++){
            bool possible(true);
            std::string tmp(s);
            int a(-1), b(-1);
            for(long p = 0; p < s.size() && possible; p++){
                if(s[p] > x || (s[p] == x && b <= x)){
                    tmp[p] = '2';
                    if(s[p] < b){possible = false; break;}
                    b = (b > s[p]) ? b : s[p];
                }
                else{
                    tmp[p] = '1';
                    if(s[p] < a){possible = false; break;}
                    a = (a > s[p]) ? a : s[p];
                }
            }

            if(possible){ans = tmp; break;}
        }

        if(ans.size()){std::cout << ans << std::endl;}
        else{std::cout << "-" << std::endl;}
    }

    return 0;
}
