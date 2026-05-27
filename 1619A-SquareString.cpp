#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        if(s.size() % 2){std::cout << "NO" << std::endl; continue;}
        long h = s.size() / 2;

        bool sq(true);
        for(long p = 0; p < h; p++){if(s[p] != s[h + p]){sq = false; break;}}
        std::cout << (sq ? "YES" : "NO") << std::endl;
    }

}
