#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, x, y; std::cin >> n >> x >> y;
    std::string s; std::cin >> s;
    long cnt(0);
    for(long p = s.size() - 1; p >= 0; p--){
        if(p >= s.size() - y && s[p] == '1'){++cnt;}
        else if(p + y + 1 == s.size() && s[p] == '0'){++cnt;}
        if(p >= s.size() - x && p + y + 1 < s.size() && s[p] == '1'){++cnt;}
    }

    std::cout << cnt << std::endl;

    return 0;
}
