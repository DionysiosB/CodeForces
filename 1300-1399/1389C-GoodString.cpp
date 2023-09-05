#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;

        long mx(0);
        for(int a = 0; a <= 9; a++){
            for(int b = 0; b <= 9; b++){
                bool state(0); long cnt(0);
                for(long p = 0; p < s.size(); p++){
                    if(state && s[p] == ('0' + a)){++cnt; state = 1 - state;}
                    else if(!state && s[p] == ('0' + b)){++cnt; state = 1 - state;}
                }
                cnt -= (a != b) && (cnt % 2);
                mx = (mx > cnt) ? mx : cnt;
            }
        }

        std::cout << (s.size() - mx) << std::endl;
    }

    return 0;
}
