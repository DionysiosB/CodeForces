#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;

        std::string s; std::cin >> s;
        std::vector<long> f(26, 0);
        for(long p = 0; p < s.size(); p++){++f[s[p] - 'a'];}

        long idx(k); std::string res(k, 'a');
        for(long p = 0; idx >= 0 && p < (n / k) && p < 26; p++){
            char x = (p + 'a');
            idx = (idx < f[p] ? idx : f[p]);
            char y = x + 1;
            for(long u = 0; u < idx; u++){res[u] = y;}
        }

        std::cout << res << std::endl;
    }

}
