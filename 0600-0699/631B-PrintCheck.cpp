#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);

    long n, m, k; std::cin >> n >> m >> k;

    std::vector<long> rowNum(n, 0);
    std::vector<long> rowColor(n, 0);
    std::vector<long> colNum(m, 0);
    std::vector<long> colColor(m, 0);

    for(long p = 1; p <= k; p++){
        long op, which, color; std::cin >> op >> which >> color;
        if(op == 1){rowNum[which - 1] = p; rowColor[which - 1] = color;}
        else{colNum[which - 1] = p; colColor[which - 1] = color;}
    }


    for(long row = 0; row < n; row++){
        for(long col = 0; col < m; col++){
            std::cout << ((rowNum[row] > colNum[col]) ? rowColor[row] : colColor[col]) << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
