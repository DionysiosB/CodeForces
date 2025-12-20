#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long mxcnt(0), cnt(0);
        for(long p = 0; p < 2 * s.size(); p++){
            if(s[p % s.size()] == '0'){++cnt;}
            else{cnt = 0;}
            mxcnt = (mxcnt > cnt ? mxcnt : cnt);
        }

        std::cout << mxcnt << std::endl;
    }

}
