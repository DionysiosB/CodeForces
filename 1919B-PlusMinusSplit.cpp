#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(0);
        for(long p = 0; p < n; p++){cnt += (s[p] == '+') - (s[p] == '-');}
        cnt = (cnt > 0) ? cnt : -cnt;
        std::cout << cnt << std::endl;
    }

}
