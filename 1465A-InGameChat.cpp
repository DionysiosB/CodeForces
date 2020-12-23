#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);


    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(0);
        for(long p = s.size() - 1; p >= 0; p--){
            if(s[p] == ')'){++cnt;}
            else{break;}
        }

        std::cout << ((cnt > n - cnt) ? "Yes" : "No") << std::endl;
    }


}
