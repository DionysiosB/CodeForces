#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        bool left(true), right(true);
        long cnt(0);
        for(long p = 0; p < n; p++){
            if((s[(n + p - 1) % n] == '-') ||  (s[p % n] == '-')){++cnt;}
            if(s[p] == '<'){right = false;}
            else if(s[p] == '>'){left = false;}
        }

        if(left || right){cnt = n;}
        std::cout << cnt << std::endl;
    }

    return 0;
}
