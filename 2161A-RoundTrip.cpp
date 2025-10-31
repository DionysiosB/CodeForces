#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long r, x, d, n; std::cin >> r >> x >> d >> n;
        std::string s; std::cin >> s;
        long cnt(0);
        for(long p = 0; p < n; p++){if(s[p] == '1' || r < x){++cnt; r -= d;}}
        std::cout << cnt << std::endl;
    }

    return 0;
}
