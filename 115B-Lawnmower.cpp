#include<iostream>
#include<vector>

long abs(long x){return x>=0?x:-x;}

int main(){

    long rows, cols; std::cin >> rows >> cols;
    std::vector<std::string> m(rows);
    for(int p = 0; p < rows; p++){std::cin >> m[p];}

    long rr(0), cc(0), res(0);
    for(long row = 0; row < rows; row++){
        long startCol = (row % 2) ? (cols - 1) : 0;
        long stepCol = (row % 2) ? -1 : 1;
        for(long col = startCol; col >=0 && col < cols; col += stepCol){
            if(m[row][col]=='W'){
                long xdiff = (cc > col) ? (cc - col) : (col - cc);
                long ydiff = (rr > row) ? (rr - row) : (row - rr);
                res += xdiff + ydiff;
                rr = row; cc = col;
            }
        }
    }

    std::cout << res << std::endl;
    return 0;
}
