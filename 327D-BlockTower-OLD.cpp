#include <iostream>
#include <vector>

void dfs(std::pair<int, int> node, std::pair<int, int> root, const std::vector<std::string> &map, std::vector<std::vector<bool> > &visited, std::vector<std::pair<char, std::pair<int, int> > > &build){

    int row = node.first;
    int col = node.second;

    if(row < 0 || row >= map.size() || col < 0 || col >= map[0].size()){return;}
    if(map[row][col] == '#'){return;}
    if(visited[row][col]){return;}
    visited[row][col] = true;

    dfs(std::make_pair(row + 1, col), root, map, visited, build);
    dfs(std::make_pair(row - 1, col), root, map, visited, build);
    dfs(std::make_pair(row, col - 1), root, map, visited, build);
    dfs(std::make_pair(row, col + 1), root, map, visited, build);

    if(node != root){
        build.push_back(std::make_pair('D', std::make_pair(row, col)));
        build.push_back(std::make_pair('R', std::make_pair(row, col)));
    }
    
    return;
}


int main(){

    std::ios_base::sync_with_stdio(false);
    int n, m; std::cin >> n >> m;
    std::vector<std::string> map(n);
    for(int p = 0; p < n; p++){std::cin >> map[p];}

    std::vector<std::pair<char, std::pair<int, int> > > b;
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            if(map[row][col] == '#'){continue;}
            b.push_back(std::make_pair('B', std::make_pair(row, col)));
        }
    }


    std::vector<std::vector<bool> > visited(n, std::vector<bool>(m, 0));
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            if(map[row][col] == '#' || visited[row][col]){continue;}
            dfs(std::make_pair(row, col), std::make_pair(row, col), map, visited, b);
        }
    }

    std::cout << b.size() << std::endl;
    for(int p = 0; p < b.size(); p++){std::cout << b[p].first << " " << (1 + b[p].second.first) << " " << (1 + b[p].second.second) << std::endl;}

    return 0;
}
