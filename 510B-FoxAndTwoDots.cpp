#include <cstdio>
#include <iostream>
#include <vector>
#include <set>

std::vector<std::string> board;
std::vector<std::vector<bool> > visited;

bool dfs(std::set<std::pair<int, int> > line, std::pair<int, int> parent, std::pair<int, int> current){

    int myrow = current.first; int mycol = current.second;
    if(line.count(std::pair<int, int>(myrow, mycol)) > 0 && line.size() >= 4){return true;}
    if(visited[myrow][mycol]){return false;}
    visited[myrow][mycol] = 1; line.insert(current);
    
    if(myrow > 0 && parent != std::pair<int, int>(myrow - 1, mycol) && board[myrow][mycol] == board[myrow - 1][mycol] && dfs(line, current, std::pair<int, int>(myrow - 1, mycol))) return true;
    if(mycol > 0 && parent != std::pair<int, int>(myrow, mycol - 1) && board[myrow][mycol] == board[myrow][mycol - 1] && dfs(line, current, std::pair<int, int>(myrow, mycol - 1))) return true;
    if(myrow < board.size() - 1 && parent != std::pair<int, int>(myrow + 1, mycol) && board[myrow][mycol] == board[myrow + 1][mycol] && dfs(line, current, std::pair<int, int>(myrow + 1, mycol)))
        return true;
    if(mycol < board[0].size() - 1 && parent != std::pair<int, int>(myrow, mycol + 1) && board[myrow][mycol] == board[myrow][mycol + 1] && dfs(line, current, std::pair<int, int>(myrow, mycol + 1)))
        return true;

    return false;
}


int main(){
    int n, m; scanf("%d %d\n", &n, &m);
    visited.resize(n, std::vector<bool>(m, 0));
    for(int p = 0; p < n; p++){std::string temp; getline(std::cin, temp); board.push_back(temp);}

    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            if(visited[row][col]){continue;}
            std::set<std::pair<int, int> > history;
            std::pair<int, int> currentNode = std::pair<int, int>(row, col);
            int res = dfs(history, currentNode, currentNode);
            if(res == true){puts("Yes"); return 0;}
        }
    }

    puts("No");

    return 0;
}
