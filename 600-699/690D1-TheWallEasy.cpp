#include <iostream>
#include <vector>

void dfs(int row, int col, const std::vector<std::string> &wall, std::vector<std::vector<bool> > &been){

    if(been[row][col]){return;}
    been[row][col] = 1; 
    if(wall[row][col] == '.'){return;}
    if(row > 0 && !been[row - 1][col] && wall[row - 1][col] == 'B'){dfs(row - 1, col, wall, been);}
    if(row + 1 < wall.size() && !been[row + 1][col] && wall[row + 1][col] == 'B'){dfs(row + 1, col, wall, been);}
    if(col > 0 && !been[row][col - 1] && wall[row][col - 1] == 'B'){dfs(row, col - 1, wall, been);}
    if(col + 1 < been[row].size() && !been[row][col + 1] && wall[row][col + 1] == 'B'){dfs(row, col + 1, wall, been);}
    return;
}

int main(){

    std::ios_base::sync_with_stdio(false);
    int r, c; std::cin >> r >> c;
    std::vector<std::string> w(r);
    std::vector<std::vector<bool> > visited(r, std::vector<bool>(c, 0));
    for(int p = r - 1; p >= 0; p--){std::cin >> w[p];}
    int count(0);
    for(int h = 0; h < r; h++){
        for(int k = 0; k < c; k++){
            if(w[h][k] == '.'){continue;}
            if(visited[h][k]){continue;}
            ++count;
            dfs(h, k, w, visited);
        }
    }

    printf("%d\n", count);

    return 0;
}
