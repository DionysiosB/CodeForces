#include <iostream>
#include <vector>


int main(){

    std::ios_base::sync_with_stdio(false);
    long r, c; std::cin >> r >> c;
    std::vector<std::string> b(r); for(long p = 0; p < r; p++){std::cin >> b[p];}
    bool possible(true);
    for(long row = 0; row < r; row++){
        for(long col = 0; col < c; col++){
            if(b[row][col] == '.'){b[row][col] = 'D';}
            else if(b[row][col] == 'S'){
                if(row > 0 && b[row - 1][col] == 'W'){possible = false; break;}
                if(row + 1 < r && b[row + 1][col] == 'W'){possible = false; break;}
                if(col > 0 && b[row][col - 1] == 'W'){possible = false; break;}
                if(col + 1 < c && b[row][col + 1] == 'W'){possible = false; break;}
            }
        }
    }

    if(possible){
        std::cout << "Yes" << std::endl;
        for(long row = 0; row < r; row++){std::cout << b[row] << std::endl;}
    }
    else{std::cout << "No" << std::endl;}

    return 0;
}
