#include <cstdio>
#include <iostream>
#include <vector>
#include <set>

int main(){

    int rows, cols; scanf("%d %d\n", &rows, &cols);
    std::vector<std::string> room(rows);
    std::vector<int> state(3);
    std::set<std::vector<int> > states;
    std::set<std::pair<int, int> > clean;

    for(int rr = 0; rr < rows; rr++){
        std::string roomRow; getline(std::cin, roomRow); 
        room[rr] = roomRow;

        for(int cc = 0; cc < roomRow.size(); cc++){
            if(roomRow[cc] == 'U' || roomRow[cc] == 'D' || roomRow[cc] == 'L' || roomRow[cc] == 'R'){
                state[0] = rr; state[1] = cc; state[2] = roomRow[cc];
                room[rr][cc] = '.';
            }
        }
    }

    while(true){
        if(states.count(state) > 0){break;}
        states.insert(state);

        int row = state[0]; int col = state[1]; int direction = state[2];
        std::pair<int, int> pos(std::pair<int, int>(row, col));
        clean.insert(pos);
        if(direction == 'U'){if(row - 1 >= 0 && room[row - 1][col] == '.'){state[0] = row - 1;} else {state[2] = 'R';}}
        else if(direction == 'R'){if(col + 1 < cols && room[row][col + 1] == '.'){state[1] = col + 1;} else {state[2] = 'D';}}
        else if(direction == 'D'){if(row + 1 < rows && room[row + 1][col] == '.'){state[0] = row + 1;} else {state[2] = 'L';}}
        else if(direction == 'L'){if(col - 1 >= 0 && room[row][col - 1] == '.'){state[1] = col - 1;} else {state[2] = 'U';}}
    }

    std::cout << clean.size() << std::endl;

    return 0;
}
