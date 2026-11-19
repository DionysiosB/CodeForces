#include <iostream>

int main(){

    const int B = 26;
    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        bool v[B] = {0};
        long n, m; std::cin >> n >> m;
        for(long p = 0; p < n; p++){
            std::string s; std::cin >> s;
            v[s[0] - 'a'] = 1;
        }

        bool possible(true);
        for(long p = 0; p < m; p++){
            std::string s; std::cin >> s;
            for(char x : s){if(!v[x - 'A']){possible = false; break;}}
        }

        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

}
