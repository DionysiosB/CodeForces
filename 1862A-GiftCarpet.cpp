#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string tgt = "vika";
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::vector<std::string> v(n);
        for(long p = 0; p < n; p++){std::cin >> v[p];} 
        long idx(0);
        for(long col = 0; col < m; col++){
            for(long row = 0; row < n; row++){
                if(v[row][col] == tgt[idx]){++idx; break;}
            }
        }

        std::cout << (idx >= tgt.size() ? "YES" : "NO") << std::endl;
    }

}
