#include <iostream>
#include <vector>
#include <algorithm>

void dfs(long row, long col, const std::vector<std::string> &g, std::vector<std::vector<bool> > &visited, long &count, bool &isLake){

    if(visited[row][col]){return;}
    if(g[row][col] == '*'){return;}
    if((row == 0 || row == g.size() - 1 || col == 0 || col == g[0].size() - 1) && g[row][col] == '.'){isLake = false;}

    visited[row][col] = true; ++count;
    if(row > 0){dfs(row - 1, col, g, visited, count, isLake);}
    if(row < g.size() - 1){dfs(row + 1, col, g, visited, count, isLake);}
    if(col > 0){dfs(row, col - 1, g, visited, count, isLake);}
    if(col < g[0].size() - 1){dfs(row, col + 1, g, visited, count, isLake);}

    return;
}

void fill(long row, long col, std::vector<std::string> &g){

    if(g[row][col] == '*'){return;}
    g[row][col] = '*';
    if(row > 0){fill(row - 1, col, g);}
    if(row < g.size() - 1){fill(row + 1, col, g);}
    if(col > 0){fill(row, col - 1, g);}
    if(col < g[0].size() - 1){fill(row, col + 1, g);}

    return;
}


int main(){

    long n, m, k; std::cin >> n >> m >> k;
    std::vector<std::string> g(n);
    for(long p = 0; p < n; p++){std::cin >> g[p];}

    std::vector<std::vector<bool> > visited(n, std::vector<bool>(m, 0));
    std::vector<std::pair<long, std::pair<long, long> > > lakes;
    for(long row = 0; row < n; row++){
        for(long col = 0; col < m; col++){
            if(visited[row][col]){continue;}
            bool isLake(true); long count(0);
            dfs(row, col, g, visited, count, isLake);
            if(isLake){lakes.push_back(std::make_pair(count, std::make_pair(row, col)));}
        }
    }

    sort(lakes.rbegin(), lakes.rend());
    long total(0);
    for(long p = lakes.size() - 1; p >= k; p--){
        total += lakes[p].first;
        fill(lakes[p].second.first, lakes[p].second.second, g);
    }

    std::cout << total << std::endl;
    for(long row = 0; row < n; row++){std::cout << g[row] << std::endl;}

    return 0;
}
