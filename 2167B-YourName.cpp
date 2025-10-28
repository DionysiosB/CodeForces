#include <iostream>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s, t; std::cin >> s >> t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        std::cout << (s == t ? "YES" : "NO") << std::endl;
    }

}
