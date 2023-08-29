#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        if(k % 2 == 0){
            sort(s.begin(), s.end());
            std::cout << s << std::endl;
            continue;
        }
        else{
            std::string odds(""), evens("");
            for(long p = 0; p < s.size(); p++){
                if(p % 2){odds += s[p];}
                else{evens += s[p];}
            }
            sort(evens.begin(), evens.end());
            sort(odds.begin(), odds.end());
            std::string res;
            for(long p = 0; p < n; p++){
                if(p % 2){res += odds[p / 2];}
                else{res += evens[p / 2];}
            }
            std::cout << res << std::endl;
        }
    }

}
