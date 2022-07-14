#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(0);
        for(long p = (n / 2); p >= 0; p--){
            if(s[p] == s[n / 2]){++cnt;}
            else{break;}
        }

        for(long p = (n / 2) + 1; p < n; p++){
            if(s[p] == s[n / 2]){++cnt;}
            else{break;}
        }

        std::cout << cnt << std::endl;
    }

}
