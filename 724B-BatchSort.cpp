#include <iostream>
#include <vector>

bool check(std::vector<std::vector<int> > f){
    for(int row = 0; row < f.size(); row++){
        int chg(0);
        for(int col = 0; col < f[row].size(); col++){
            if(f[row][col] != col + 1){++chg;}
            if(chg > 2){return false;}
        }
    }

    return true;
}


int main(){

    std::ios_base::sync_with_stdio(false);
    int n, m; std::cin >> n >> m;

    std::vector<std::vector<int> > mat(n, std::vector<int>(m, 0));
    for(int row = 0; row < n; row++){for(int col = 0; col < m; col++){std::cin >> mat[row][col];}}
    bool possible = check(mat);
    for(int p = 0; p < m; p++){
        if(possible){break;}
        for(int q = p + 1; q < m; q++){
            for(int row = 0; row < n; row++){int tmp = mat[row][p]; mat[row][p] = mat[row][q]; mat[row][q] = tmp;}
            possible = check(mat); 
            if(possible){break;}
            for(int row = 0; row < n; row++){int tmp = mat[row][p]; mat[row][p] = mat[row][q]; mat[row][q] = tmp;}
        }
    }
    
    std::cout << (possible ? "YES" : "NO") << std::endl;

    return 0;
}
