#include <iostream>

int main(){

    const int n = 5;
    std::string x; std::cin >> x;
    std::string ans = "NO";
    for(long p = 0; p < n; p++){
        std::string s; std::cin >> s;
        if(s[0] == x[0] || s[1] == x[1]){ans = "YES"; break;}
    }

    std::cout << ans << std::endl;

    return 0;
}
