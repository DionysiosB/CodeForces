#include <cstdio>
#include <vector>

std::pair<int , int> findFactors(long input){
    int twos(0), fives(0);
    long test = input; while(test % 2 == 0){++twos; test /= 2;}
    test = input; while(test % 5 == 0){++fives; test /= 5;}
    return std::pair<int, int>(twos, fives);
}

std::pair<int, int> addPair(std::pair<int, int> a, std::pair<int, int> b){return std::pair<int, int>(a.first + b.first, a.second + b.second);}

std::pair<int, int> bestPair(std::pair<int, int> a, std::pair<int, int> b){
    int minA = (a.first < a.second) ? a.first : a.second;
    int maxA = (a.first < a.second) ? a.second : a.first;
    int minB = (b.first < b.second) ? b.first : b.second;
    int maxB = (b.first < b.second) ? b.second : b.first;
    if(minA < minB || (minA == minB && maxA < maxB)){return a;} else {return b;}
}

int main(){

    int n; scanf("%d\n", &n);
    std::vector<std::vector<long> > matrix(n, std::vector<long>(n, 0));
    std::vector<std::vector<std::pair<int, int> > > state(n, std::vector<std::pair<int, int> >(n, std::pair<int, int>(0,0)));
    std::vector<std::vector<char> > move(n, std::vector<char>(n, 'N'));
    for(int row = 0; row < n; row++){for(int col = 0; col < n; col++){scanf("%ld", &matrix[row][col]);}}
    state[0][0] = findFactors(matrix[0][0]);

   for(int row = 1; row < n; row++){
       state[row][0] = addPair(state[row - 1][0] , findFactors(matrix[row][0]));
       move[row][0] = 'D';
   }

   for(int col = 1; col < n; col++){
       state[0][col] = addPair(state[0][col - 1] , findFactors(matrix[0][col]));
       move[0][col] = 'R';
   }

   for(int row = 1; row < n; row++){
       for(int col = 1; col < n; col++){
           std::pair<int, int> current = findFactors(matrix[row][col]);
           std::pair<int, int> fromLeft   = addPair(current, state[row][col - 1]);
           std::pair<int, int> fromUp = addPair(current, state[row - 1][col]);
           state[row][col] = bestPair(fromLeft, fromUp);
           printf("Row: %d Col: %d\t   state: %d %d\n", row, col, state[row][col].first, state[row][col].second);
           printf("Row: %d Col: %d\t   LEFT : %d %d\n", row, col, fromLeft.first, fromLeft.second);
           printf("Row: %d Col: %d\t   UP   : %d %d\n", row, col, fromUp.first, fromUp.second);
           if(state[row][col] == fromLeft){move[row][col]  = 'R';} 
           if(state[row][col] == fromUp){move[row][col]  = 'D';} 
       }
   }

   int cRow(n - 1), cCol(n - 1);
   std::vector<char> path(2 * n - 1);
   while(cRow > 0 || cCol > 0){
       //printf("%d\t==>%c<==\n", cRow + cCol, move[cRow][cCol]);
       path[cRow + cCol] = move[cRow][cCol];
       if(move[cRow][cCol] == 'R'){--cCol;} else {--cRow;}
   }

   int total = (state[n - 1][n - 1].first < state[n - 1][n - 1].second) ? state[n - 1][n - 1].first : state[n - 1][n - 1].second;
   printf("%d\n", total);
   for(int p = 1; p < path.size(); p++){printf("%c", path[p]);}; puts("");


    //for(int row = 0; row < n; row++){for(int col = 0; col < n; col++){printf("%ld\t", matrix[row][col]);}; puts("");}
    for(int row = 0; row < n; row++){for(int col = 0; col < n; col++){printf("%c\t", move[row][col]);}; puts("");}; puts("=====");
    for(int row = 0; row < n; row++){for(int col = 0; col < n; col++){printf("%d,%d\t", state[row][col].first, state[row][col].second);}; puts("");}; puts("=====");

    return 0;
}
