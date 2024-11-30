#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m, k; std::cin >> n >> m >> k;
        std::string s; std::cin >> s;
        long z(0), cnt(0), cov(-1);
        for(long p = 0; p < n; p++){
            if(s[p] == '1' || p <= cov){z = 0; continue;}
            ++z;
            if(z >= m){++cnt; cov = p + k - 1; z = 0;}
        }

        std::cout << cnt << std::endl;
    }

}
