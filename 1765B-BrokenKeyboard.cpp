#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long idx(0), mod(0);
        bool ans(true);
        while(idx < n){
            if(mod){
                if(idx + 1 >= n || s[idx + 1] != s[idx]){ans = false; break;}
                idx += 2;
            }
            else{++idx;}

            mod = 1 - mod;
        }

        std::cout << (ans ? "YES" : "NO") << std::endl;
    }


}
