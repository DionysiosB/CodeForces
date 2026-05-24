#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);

    int nrows, ncols; std::cin >> nrows >> ncols;
    std::vector<std::vector<long> > hor(nrows + 1, std::vector<long>(ncols + 1, 0));
    std::vector<std::vector<long> > ver(nrows + 1, std::vector<long>(ncols + 1, 0));

    std::vector<std::string> grid(nrows);
    for(int row = 0; row < nrows; row++){std::cin >> grid[row];}

    for(int row = 1; row <= nrows; row++){
        for(int col = 1; col <= ncols; col++){
            hor[row][col] = hor[row][col - 1] + ((col > 1) ? (grid[row - 1][col - 1] == '.' && grid[row - 1][col - 2] == '.') : 0);
            ver[row][col] = ver[row - 1][col] + ((row > 1) ? (grid[row - 1][col - 1] == '.' && grid[row - 2][col - 1] == '.') : 0);
        }
    }


    long numq; std::cin >> numq;
    while(numq--){
        int r1, c1, r2, c2; std::cin >> r1 >> c1 >> r2 >> c2;
        long res(0);
        for(int p = r1; p <= r2; p++){res += hor[p][c2] - hor[p][c1];}
        for(int p = c1; p <= c2; p++){res += ver[r2][p] - ver[r1][p];}
        std::cout << res << std::endl;
    }

    return 0;
}
