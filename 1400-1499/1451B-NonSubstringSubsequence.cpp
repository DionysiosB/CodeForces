#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, q; std::cin >> n >> q;
        std::string s; std::cin >> s;
        while(q--){
            long left, right; std::cin >> left >> right;
            --left; --right;
            char first(s[left]), last(s[right]);
            bool possible(false);
            for(long p = 0; p < left && !possible; p++){if(s[p] == first){possible = true;}}
            for(long p = right + 1; p < s.size() && !possible; p++){if(s[p] == last){possible = true;}}
            std::cout << (possible ? "YES" : "NO") << std::endl;
        }

    }
}
