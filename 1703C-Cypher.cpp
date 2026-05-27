#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<int> v(n); for(long p = 0; p < n; p++){std::cin >> v[p];}
        for(long p = 0; p < n; p++){
            long x; std::cin >> x;
            std::string s; std::cin >> s;
            long cnt(0);
            for(long q = 0; q < s.size(); q++){
                if(s[q] == 'D'){++cnt;}
                else if(s[q] == 'U'){--cnt;}
            }

            cnt = ((cnt % 10) + 10) % 10;
            v[p] += cnt; v[p] = (v[p] + 10) % 10;
        }

        for(long p = 0; p < n; p++){std::cout << v[p]  << " ";}
        std::cout << std::endl;
    }

}
