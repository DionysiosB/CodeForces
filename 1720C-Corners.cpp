#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::vector<std::string> v(n); for(long row = 0; row < n; row++){std::cin >> v[row];}
        long ones(0);
        for(long row = 0; row < n; row++){
            for(long col = 0; col < m; col++){
                ones += v[row][col] - '0';
            }
        }

        long mn(5);
        for(long row = 0; row < n - 1; row++){
            for(long col = 0; col < m - 1; col++){
                long cur = v[row][col] + v[row][col + 1] + v[row + 1][col] + v[row + 1][col + 1] - 4 * '0';
                if(!cur){continue;}
                long tst = (cur > 2) ? (cur - 1) : 1;
                mn = (mn < tst) ? mn : tst;
            }
        }

        long ans = ones ? (1 + ones - mn) : 0;
        std::cout << ans << std::endl;
    }

}
