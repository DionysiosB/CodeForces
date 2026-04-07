#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        bool possible(n % 2 == 0 || s[0] == 'a' || s[0] == '?');
        for(long p = 1; (n % 2 == 0) && possible && p < s.size(); p += 2){
            if(s[p - 1] == s[p]){possible = false;}
        }
        for(long p = 1; (n % 2) && possible && 2 * p < s.size(); p++){
            if(s[2 * p - 1] == s[2 * p]){possible = false;}
        }

        puts(possible ? "YES" : "NO");
    }

}
