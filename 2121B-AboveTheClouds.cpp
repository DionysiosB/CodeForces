#include <iostream>
#include <vector>

int main(){

    const int B = 26;
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        std::vector<bool> v(B, 0);
        v[s[0] - 'a'] = 1;
        v[s.back() - 'a'] = 1;

        bool possible(false);
        for(long p = 1; !possible && p < s.size() - 1; p++){
            int x = s[p] - 'a';
            if(v[x]){possible = true;}
            v[x] = 1;
        }

        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

}
