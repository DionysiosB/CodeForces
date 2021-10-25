#include <iostream>
#include <vector>

int main(){

    long n, m; std::cin >> n >> m;
    std::vector<std::string> t(n);
    for(long row = 0; row < n; row++){std::cin >> t[row];}
    long top(-1), bottom(-1), left(-1), right(-1);
    for(long row = 0; row < n; row++){
        for(long col = 0; col < m; col++){
            if(t[row][col] == 'W'){continue;}
            if(top <= 0){top = row;}
            if(left <= 0){left = col;}
            bottom = (bottom > row) ? bottom : row;
            right = (right > col) ? right : col;
        }
    }

    long crow = 1 + (bottom + top) / 2;
    long ccol = 1 + (left + right) / 2;
    std::cout << crow << " " << ccol << std::endl;

    return 0;
}
