#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        s = '1' + s + '1';
        long cnt(0), prev(0);
        for(long p = 1; p <= n; ++p) {
            if(s[p] == '0') {
                if(s[p - 1] == '1'){prev = p;}
                if(s[p + 1] == '1'){cnt += (p - prev + 1 + (prev == 1) + (p == n)) / 3;}
            }
            else{++cnt;}
        }

        std::cout << cnt << '\n';
    }

}
