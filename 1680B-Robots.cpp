#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::vector<std::string> f(n);
        for(long row = 0; row < n; row++){std::cin >> f[row];}
        long br(-1), bc(-1);
        for(long row = 0; br < 0 && row < n; row++){
            for(long col = 0; bc < 0 && col < m; col++){
                if(f[row][col] == 'R'){br = row; bc = col; break;}
            }
        }

        bool possible(true);
        for(long row = br + 1; possible && row < n; row++){
            for(long col = 0; possible && col < bc; col++){
                if(f[row][col] == 'R'){possible = false; break;}
            }
        }

        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

}
