#include <cstdio>
#include <vector>

int main(){

    int n(0), m(0); scanf("%d %d\n", &n, &m);
    std::vector<std::vector<char>> drawing(n,std::vector<char>(m,'0'));
    int startRow(n), endRow(0), startCol(m), endCol(0);

    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            char temp('0'); scanf("%c", &temp);
            drawing[row][col] = temp;

            if(temp == '*'){
                if(row < startRow){startRow = row;}
                if(row > endRow){endRow = row;}
                if(col < startCol){startCol = col;}
                if(col > endCol){endCol = col;}
            }
        }
        scanf("\n");
    }


    for(int row = startRow; row <= endRow; row++){
        for(int col = startCol; col <= endCol; col++){
            printf("%c", drawing[row][col]);
        }
        puts("");
    }

    return 0;
}
