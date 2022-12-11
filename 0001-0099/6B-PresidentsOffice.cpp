#include <cstdio>
#include <vector>
#include <set>

int main(){

    int n(0), m(0); char c('.'); scanf("%d %d %c\n", &n, &m, &c);
    std::vector<std::vector<char> > plan(n, std::vector<char>(m, '.'));

    std::set<std::pair<int,int> > president;

    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            scanf("%c", &plan[row][col]);
            if(plan[row][col] == c){president.insert(std::pair<int,int>(row, col));}
        }
        scanf("\n");
    }

    std::set<std::pair<int,int> >::iterator setIter;
    std::set<char> neighbors;

    for(setIter = president.begin(); setIter != president.end(); setIter++){
        int currentRow = setIter->first;
        int currentCol = setIter->second;
        if(currentRow > 0){char temp = plan[currentRow - 1][currentCol]; if(temp != '.' && temp != c){neighbors.insert(temp);}}
        if(currentRow < n - 1){char temp = plan[currentRow + 1][currentCol]; if(temp != '.' && temp != c){neighbors.insert(temp);}}
        if(currentCol > 0){char temp = plan[currentRow][currentCol - 1]; if(temp != '.' && temp != c){neighbors.insert(temp);}}
        if(currentCol < m - 1){char temp = plan[currentRow][currentCol + 1]; if(temp != '.' && temp != c){neighbors.insert(temp);}}
    }

    printf("%lu\n", neighbors.size());

    return 0;
}
