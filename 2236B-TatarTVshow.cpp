#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;

        bool possible(true);
        for(long f = 0; possible && f < k; f++){
            bool carry(false);
            for(long u = f; u < s.size(); u += k){if(s[u] == '1'){carry = !carry;}}
            if(carry){possible = false;}
        }

        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

}
