#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long res(-1);
        for(long p = 1; (res < 0) && p < n; p++){if(s[p - 1] == 'R' && s[p] == 'L'){res = 0; break;}}
        for(long p = 1; (res < 0) && p < n; p++){if(s[p - 1] == 'L' && s[p] == 'R'){res = p; break;}}
        std::cout << res << std::endl;
    }
}
