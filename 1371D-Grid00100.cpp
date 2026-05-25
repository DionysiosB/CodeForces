#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s(n, '0');
        std::vector<std::string> v(n, s);
        long row(0), col(0);
        for(long p = 0; p < k; p++){
            v[row][col] = '1';
            row = (row + 1) % n;
            col = (col + 1 + (row == 0)) % n;
        }

        std::cout << (k % n ? 2 : 0) << std::endl;
        for(long p = 0; p < n; p++){std::cout << v[p] << std::endl;}
    }

    return 0;
}
