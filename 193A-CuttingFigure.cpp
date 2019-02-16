#include <iostream>
#include <vector>

void dfs(int row, int col, std::vector<std::string> &g, int &count){

    if(row < 0 || row >= g.size() || col < 0 || col >= g[0].size()){return;}
    if(g[row][col] == '.'){return;}
    ++count; g[row][col] = '.';
    dfs(row - 1, col, g, count);
    dfs(row + 1, col, g, count);
    dfs(row, col - 1, g, count);
    dfs(row, col + 1, g, count);

    return;
}


int main(){

    int n, m; std::cin >> n >> m;
    std::vector<std::string> paper(n);
    for(int p = 0; p < n; p++){std::cin >> paper[p];}

    int numPainted(0);
    for(int row = 0; row < n; row++){for(int col = 0; col < m; col++){numPainted += (paper[row][col] == '#');}}
    if(numPainted <= 2){std::cout << "-1" << std::endl; return 0;}

    int ans(2);
    for(int row = 0; row < n; row++){
        if(ans < 2){break;}
        for(int col = 0; col < m; col++){
            if(paper[row][col] == '.'){continue;}
            std::vector<std::string> mock = paper;

            int sr(-1), sc(-1);
            if(row > 0 && mock[row - 1][col] == '#'){sr = row - 1; sc = col;}
            else if(row + 1 < n && mock[row + 1][col] == '#'){sr = row + 1; sc = col;}
            else if(col > 0 && mock[row][col - 1] == '#'){sr = row; sc = col - 1;}
            else if(col + 1 < m && mock[row][col + 1] == '#'){sr = row; sc = col + 1;}

            mock[row][col] = '.';
            int cnt(0);
            dfs(sr, sc, mock, cnt);
            if(cnt + 1 < numPainted){ans = 1; break;}
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
