#include <iostream>
#include <vector>

int main(){

    const std::string g("vika");
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::vector<std::string> r(n); for(long p = 0; p < n; p++){std::cin >> r[p];}

        long idx(0);
        for(long col = 0; col < m && idx < g.size(); col++){
            for(long row = 0; row < n; row++){
                if(r[row][col] == g[idx]){++idx; break;}
            }
        }

        std::cout << (idx == g.size() ? "YES" : "NO") << std::endl;
    }

}
