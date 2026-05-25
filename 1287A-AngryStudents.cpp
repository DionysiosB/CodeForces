#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        long last(-1), ans(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'A'){last = p;}
            else if(s[p] == 'P'){
                if(last < 0){continue;}
                long dist = p - last;
                ans = (ans > dist) ? ans : dist;
            }
        }

        std::cout << ans << std::endl;
    }

    return 0;
}
