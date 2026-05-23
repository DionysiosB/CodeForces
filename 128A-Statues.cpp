#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

const int N = 8;
int drow[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
int dcol[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
std::vector<std::string> initialState(N);

bool dfs(int inrow, int incol, int step){

    if(step > N){return 1;}
    for(int p = 0; p <= N; p++){
        int row = inrow + drow[p]; int col = incol + dcol[p];
        if(row < 0 || row >= N || col < 0 || col >= N){continue;}
        if(row >= step && initialState[row - step][col] == 'S'){continue;}
        if(row > step && initialState[row - step - 1][col] == 'S'){continue;}
        if(dfs(row, col, step + 1)){return 1;}
    }
    return 0;
}

int main(){

    for(int p = 0; p < N; p++){getline(std::cin, initialState[p]);}
    puts(dfs(7, 0, 0) ? "WIN" : "LOSE");
    return 0;
}
