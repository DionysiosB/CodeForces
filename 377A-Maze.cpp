#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>

int main(){

    long n, m, k; scanf("%ld %ld %ld\n", &n, &m, &k);
    std::vector<std::string> maze(n);
    for(long row = 0; row < n; row++){getline(std::cin, maze[row]);}

    bool startFound(0);
    long startRow(0), startCol(0);

    for(long row = 0; row < n; row++){
        for(long col = 0; col < m; col++){
            if(maze[row][col] == '.'){startRow = row; startCol = col; startFound = 1; break;}
        }
        if(startFound){break;}
    }

    long converted(0);
    std::queue<std::pair<long, long> > toVisit;
    std::vector<std::pair<long, long> > visited;
    toVisit.push(std::pair<long, long>(startRow, startCol));


    while(!toVisit.empty()){
        std::pair<long, long> current = toVisit.front();
        toVisit.pop(); 
        long row(current.first), col(current.second);
        if(maze[row][col] != '.'){continue;}
        maze[row][col] = 'v';
        visited.push_back(std::pair<long, long>(row, col));

        if(col < m - 1 && maze[row][col + 1] == '.'){toVisit.push(std::pair<long, long>(row, col + 1));}
        if(row < n - 1 && maze[row + 1][col] == '.'){toVisit.push(std::pair<long, long>(row + 1, col));}
        if(col > 0 && maze[row][col - 1] == '.'){toVisit.push(std::pair<long, long>(row, col - 1));}
        if(row > 0 && maze[row - 1][col] == '.'){toVisit.push(std::pair<long, long>(row - 1, col));}

    }

    for(long p = 0; p < visited.size() - k; p++){maze[visited[p].first][visited[p].second] = '.';}
    for(long p = visited.size() - k; p < visited.size(); p++){maze[visited[p].first][visited[p].second] = 'X';}
    for(long row = 0; row < n; row++){std::cout << maze[row] << std::endl;}

    return 0;
}
