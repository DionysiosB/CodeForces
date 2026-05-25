#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    const long N = 1000;
    long n; std::cin >> n;
    std::string s; std::cin >> s;
    bool possible(false);
    for(long p = 0; p <= N; p++){
        long cur(0), cnt(0);
        for(long q = 0; q < s.size(); q++){
            cur += s[q] - '0';
            if(cur > p){break;}
            else if(cur == p){cur = 0; ++cnt;}
        }
        if((cnt > 1) && (cur == 0)){possible = true; break;}
    }

    std::cout << (possible ? "YES" : "NO") << std::endl;

    return 0;
}
