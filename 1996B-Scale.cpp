#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::vector<std::string> v(n); for(long p = 0; p < n; p++){std::cin >> v[p];}
        std::vector<std::string> w(n / k, std::string(n / k, '0'));
        for(long row = 0; row < n; row += k){
            for(long col = 0; col < n; col += k){
                w[row / k][col / k] = v[row][col];
            }
        }

        for(long p = 0; p < w.size(); p++){std::cout << w[p] << std::endl;}
    }


}
