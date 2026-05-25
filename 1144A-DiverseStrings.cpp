#include <iostream>
#include <algorithm>

int main(){

    long n; std::cin >> n;
    while(n--){
        std::string s; std::cin >> s;
        sort(s.begin(), s.end());
        std::string ans = "Yes";
        for(long p = 1; p < s.size(); p++){if(s[p] - s[p - 1] != 1){ans = "No"; break;}}
        std::cout << ans << std::endl;
    }

    return 0;
}
