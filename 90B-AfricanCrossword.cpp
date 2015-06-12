#include <cstdio>
#include <vector>

int main(){

    int n(0), m(0); scanf("%d %d\n", &n, &m);
    std::vector<std::vector<char> > grid(n, std::vector<char>(m,'#'));
    std::vector<std::vector<char> > mock(n, std::vector<char>(m,'#'));

    for(int row = 0; row < n; row++){for(int col = 0; col < m; col++){scanf("%c", &grid[row][col]);}scanf("\n");}
    for(int row = 0; row < n; row++){for(int col = 0; col < m; col++){mock[row][col] = grid[row][col];}}

    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            bool cross = 0;
            for(int nextCol = col + 1; nextCol < m; nextCol++){if(grid[row][col] == grid[row][nextCol]){cross = 1; mock[row][nextCol] = '#';}}
            for(int nextRow = row + 1; nextRow < n; nextRow++){if(grid[row][col] == grid[nextRow][col]){cross = 1; mock[nextRow][col] = '#';}}
            if(cross){mock[row][col] = '#';}
        }
    }

    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            if(mock[row][col] != '#'){printf("%c", mock[row][col]);}
        }
    }

    return 0;
}
