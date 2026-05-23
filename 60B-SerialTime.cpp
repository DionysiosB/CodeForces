#include <iostream>
#include <vector>


void dfs(int h, int row, int col, std::vector<std::vector<std::vector<bool> > > &g, int &count){

    if(h < 0 || h >= g.size() || row < 0 || row >= g[0].size() || col < 0 || col >= g[0][0].size()){return;}
    if(!g[h][row][col]){return;}
    g[h][row][col] = 0; ++count;
    
    dfs(h - 1, row, col, g, count);
    dfs(h + 1, row, col, g, count);
    dfs(h, row - 1, col, g, count);
    dfs(h, row + 1, col, g, count);
    dfs(h, row, col - 1, g, count);
    dfs(h, row, col + 1, g, count);

    return;
}

int main(){

    int k, n, m; scanf("%d %d %d", &k, &n, &m);
    std::vector<std::vector<std::vector<bool> > > g(k, std::vector<std::vector<bool> >(n, std::vector<bool>(m, 0)));
    for(int p = 0; p < k; p++){
        for(int q = 0; q < n; q++){
            std::string s; std::cin >> s;
            for(int r = 0; r < m; r++){g[p][q][r] = (s[r] == '.');}
        }
    }

    int x, y; scanf("%d %d", &x, &y);
    --x; --y;

    int count(0);
    dfs(0, x, y, g, count);
    printf("%d\n", count);

    return 0;
}
