#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        int cnt(0); bool prev(true);
        for(long p = 0; cnt < 3 && p < n / 2; p++){
            int check = (s[p] == s[n - 1 - p]);
            if(check != prev){++cnt;}
            prev = check;
        }

        puts(cnt < 3 ? "Yes" : "No");
    }

}
