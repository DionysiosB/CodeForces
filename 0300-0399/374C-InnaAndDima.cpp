#include <iostream>
#include <vector>

void dfs(const int &row, const int &col, int index, const std::string &target, const std::vector<std::string> &g, std::vector<std::vector<bool> > &visited, bool &cycle, int &count){

    if(row < 0 || row >= g.size() || col < 0 || col >= g[0].size()){return;}
    index %= target.size();
    if(target[index] != g[row][col]){return;}
    if(visited[row][col]){return;}
    visited[row][col] = 1;

    if(index + 1 == target.size()){
        ++count;
        if(row - 1 >= 0 && g[row - 1][col] == target[0] && visited[row - 1][col]){cycle = true; return;}
        if(row + 1 < g.size() && g[row + 1][col] == target[0] && visited[row + 1][col]){cycle = true; return;}
        if(col - 1 >= 0 && g[row][col - 1] == target[0] && visited[row][col - 1]){cycle = true; return;}
        if(col + 1 < g[0].size() && g[row][col + 1] == target[0] && visited[row][col + 1]){cycle = true; return;}
    }

    dfs(row - 1, col, index + 1, target, g, visited, cycle, count);
    dfs(row + 1, col, index + 1, target, g, visited, cycle, count);
    dfs(row, col - 1, index + 1, target, g, visited, cycle, count);
    dfs(row, col + 1, index + 1, target, g, visited, cycle, count);

    return;
}

int main(){

    const std::string target = "DIMA";
    std::ios_base::sync_with_stdio(false);

    int n, m; std::cin >> n >> m;
    std::vector<std::string> g(n);
    for(int row = 0; row < n; row++){std::cin >> g[row];}

    bool cycle = false;
    long maxCount(0);
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            std::vector<std::vector<bool> > visited(n, std::vector<bool>(m, 0));
            if(g[row][col] != target[0]){continue;}
            int count = 0; 
            dfs(row, col, 0, target, g, visited, cycle, count);
            if(cycle){break;}
            maxCount = (maxCount > count) ? maxCount : count;
        }
    }

    if(cycle){std::cout << "Poor Inna!" << std::endl;}
    else if(maxCount == 0){std::cout << "Poor Dima!" << std::endl;}
    else{std::cout << maxCount << std::endl;}

    return 0;
}
