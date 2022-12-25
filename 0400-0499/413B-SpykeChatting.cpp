#include <iostream>
#include <vector>

int main(){

    long n, m, k; std::cin >> n >> m >> k;
    std::vector<std::vector<int> > array(n, std::vector<int>(m, 0));
    std::vector<long> msg(m,0);
    std::vector<long> count(n,0);

    for(long row = 0; row < n; row++){for(long col = 0; col < m; col++){std::cin >> array[row][col];}}

    for(long p = 0; p < k; p++){
        long x, y; std::cin >> x >> y;
        --count[x - 1]; ++msg[y - 1];
    }

    for(long row = 0; row < n; row++){
        for(long col = 0; col < m; col++){count[row] += array[row][col] * msg[col];}
        std::cout << count[row] << " ";
    }
    std::cout << std::endl;

    return 0;
}
