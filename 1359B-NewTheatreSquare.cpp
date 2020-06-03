#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, m, x, y; std::cin >> n >> m >> x >> y;
        long cost(0);
        long dbl = 2 * x; dbl = (dbl < y) ? dbl : y;
        for(long p = 0; p < n; p++){
            std::string row; std::cin >> row;
            long cnt(0);
            for(long u = 0; u < row.size(); u++){
                if(row[u] == '*'){cost += (cnt / 2) * dbl + (cnt % 2) * x; cnt = 0;}
                else{++cnt;}
            }
            cost += (cnt / 2) * dbl + (cnt % 2) * x; 
        }

        std::cout << cost << std::endl;
    }

    return 0;
}
