#include <iostream>
#include <map>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::map<long, long> m;
        m[0] = 1;

        long cs(0);
        long long ans(0);
        for(long p = 0; p < s.size(); p++){
            cs += s[p] - '0';
            long cur = cs - p - 1;
            ++m[cur];
            ans += m[cur] - 1;
        }

        std::cout << ans << std::endl;
    }

}
