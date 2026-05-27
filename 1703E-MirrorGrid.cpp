#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<std::string> v(n); for(long p = 0; p < n; p++){std::cin >> v[p];}
        long total(0);
        for(long row = 0; row < n / 2; row++){
            for(long col = row; col < n - 1 - row; col++){
                char a = v[row][col];
                char b = v[col][n - 1 - row];
                char c = v[n - 1 - row][n - 1 - col];
                char d = v[n - 1 - col][row];
                int cntZ = (a == '1') + (b == '1') + (c == '1') + (d == '1');
                int cntA = (a == '0') + (b == '0') + (c == '0') + (d == '0');
                total += (cntZ < cntA ? cntZ : cntA);
            }
        }

        std::cout << total << std::endl;

    }

}
