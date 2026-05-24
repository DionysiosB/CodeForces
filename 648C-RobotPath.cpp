#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long nr, nc; std::cin >> nr >> nc;
    std::vector<std::string> v(nr);
    for(long row = 0; row < nr; row++){std::cin >> v[row];}

    long srow(-1), scol(-1);
    for(long row = 0; srow < 0 && row < nr; row++){
        for(long col = 0; scol < 0 && col < nc; col++){
            if(v[row][col] == 'S'){srow = row; scol = col;}
        }
    }

    long row(srow), col(scol);
    bool flag(true); std::string w("");
    while(flag){
        if(row + 1 < nr && v[row + 1][col] == '*'){w += 'D'; ++row;}
        else if(col + 1 < nc && v[row][col + 1] == '*'){w += 'R'; ++col;}
        else if(row > 0 && v[row - 1][col] == '*'){w += 'U'; --row;}
        else if(col > 0 && v[row][col - 1] == '*'){w += 'L'; --col;}
        else{flag = false; break;}
        v[row][col] = '#'; 
    }
    if(row + 1 == srow && col == scol){w += 'D';}
    else if(row == srow && col + 1 == scol){w += 'R';}
    else if(row - 1 == srow && col == scol){w += 'U';}
    else if(row == srow && col - 1 == scol){w += 'L';}

    std::cout << w << std::endl;

    return 0;
}
