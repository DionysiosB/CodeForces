#include <iostream>

int main(){

    std::string s; std::cin >> s;
    std::string ans("YES");
    for(long p = 2; p < s.size(); p++){
        long a = s[p - 2] - 'A';
        long b = s[p - 1] - 'A';
        long x = s[p] - 'A';
        long y = (a + b) % 26;
        if(x != y){ans = "NO"; break;}
    }

    std::cout << ans << std::endl;

    return 0;
}
