#include <iostream>

int main() {

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        char prev('_'); long cnt(0);
        for(long p = 0; p < n - 1; p++){
            if(s[p] == prev){++cnt;}
            else{prev = s[p]; cnt = 1;}
            printf("%ld ", p - cnt + 2);
        }

        puts("");
    }

}
