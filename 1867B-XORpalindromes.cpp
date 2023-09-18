#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(0); for(long p = 0; p < n - 1 - p; p++){cnt += (s[p] != s[n - 1 - p]);}
        std::string res(n + 1, '0');
        for(long p = cnt; p + cnt <= n; p++){
            if((n % 2) || ((p - cnt) % 2 == 0)){res[p] = '1';}
        }

        std::cout << res << std::endl;
    }

}
