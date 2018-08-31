#include <iostream>
#include <vector>

int main(){

    long n, m; std::cin >> n >> m;
    std::vector<std::string> sheet(n);
    for(long p = 0; p < n; p++){std::cin >> sheet[p];}

    long left(m + 1), right(-1), top(n + 1), bottom(0), count(0);
    for(long row = 0; row < n; row++){
        for(long col = 0; col < m; col++){
            if(sheet[row][col] != 'B'){continue;}
            ++count;
            top = (top < row) ? top : row;
            bottom = (bottom > row) ? bottom : row;
            left = (left < col) ? left : col;
            right = (right > col) ? right : col;
        }
    }

    long height = bottom - top + 1;
    long width = right - left + 1;
    long side = (height > width) ? height : width;
    if(n < side || m < side){std::cout << "-1" << std::endl;}
    else if(count <= 0){std::cout << "1" << std::endl;}
    else{std::cout << (side * side - count) << std::endl;}

    return 0;
}
