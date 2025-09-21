#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::string ans("YES");
        long idx(0);
        for(long p = 1; p <= n; p++){
            if(p < n && (s[p - 1] != s[p])){continue;}
            if( (s[idx] == '1') && (s[p - 1] == '1') && (((p - idx) / 2) % 2)  ){ans = "NO";}
            idx = p;
        }

        std::cout << ans << std::endl;
    }

}
