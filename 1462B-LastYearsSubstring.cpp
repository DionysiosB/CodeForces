#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false); std::cin.tie(0);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::string g("2020");
        long cnt(0), idx(0);
        for(long p = 0; p < 4; p++){
            if(s[p] == g[idx]){++idx; ++cnt;}
            else{break;}
        }

        idx = 3;
        for(long p = s.size() - 1; p >= s.size() - 4; p--){
            if(s[p] == g[idx]){++cnt; --idx;}
            else{break;}
        }

        std::cout << ((cnt >= 4) ? "YES" : "NO") << std::endl;
    }

}
