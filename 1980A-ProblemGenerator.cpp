#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::string s; std::cin >> s;

        long v[7] = {0};
        for(long p = 0; p < s.size(); p++){++v[s[p] - 'A'];}
        long cnt(0);
        for(long p = 0; p < 7; p++){
            long diff = m - v[p];
            cnt += (diff > 0) * diff;
        }

        std::cout << cnt << std::endl;
    }

}
