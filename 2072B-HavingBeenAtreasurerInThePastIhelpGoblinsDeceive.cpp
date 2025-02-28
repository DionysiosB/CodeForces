#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long long a(0), b(0);
        for(size_t p = 0; p < s.size(); p++){
            a += (s[p] == '-');
            b += (s[p] == '_');
        }

        long long ans = b * (a / 2) * ( (a + 1) / 2);
        std::cout << ans << std::endl;
    }

}
