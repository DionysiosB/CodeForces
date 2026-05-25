#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        long last(-k - 7);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '1'){last = p;}
            else if(p <= last + k){s[p] = '2';}
        }

        long cnt(0);
        last = s.size() + k + 7;
        for(long p = s.size(); p >= 0; p--){
            if(s[p] == '1'){last = p;}
            else if(p + k < last && s[p] == '0'){++cnt; last = p;}
        }

        std::cout << cnt << std::endl;
    }

    return 0;
}
