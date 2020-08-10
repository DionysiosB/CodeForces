#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::vector<std::string> a(n);
        for(long p = 0; p < n; p++){std::cin >> a[p];}

        long cnt(0);
        for(long p = 0; p < n; p++){cnt += (a[p][m - 1] == 'R');}
        for(long p = 0; p < m; p++){cnt += (a[n - 1][p] == 'D');}
        std::cout << cnt << std::endl;
    }

    return 0;
}
