#include <iostream>
#include <vector>

int main(){


    const int N = 8;
    std::vector<std::string> state(N);
    std::vector<std::pair<int, int> > white;
    std::vector<std::pair<int, int> > black;
    for(int row = 0; row < N; row++){
        std::string temp; 
        getline(std::cin, temp); 
        state[row] = temp;
        for(int col = 0; col < N; col++){
            if(temp[col] == 'W'){white.push_back(std::pair<int, int>(row, col));}
            else if(temp[col] == 'B'){black.push_back(std::pair<int, int>(row, col));}
        }
    }


    int bestWhite = N + 1;
    for(int p = 0; p < white.size(); p++){
        int candidate = white[p].first;
        for(int q = 0; q < black.size(); q++){if(black[q].second == white[p].second && black[q].first < white[p].first){candidate = N + 1; break;}}
        if(candidate < bestWhite){bestWhite = candidate;}
    }

    int bestBlack = N + 1;
    for(int p = 0; p < black.size(); p++){
        int candidate = N - 1 - black[p].first;
        for(int q = 0; q < white.size(); q++){if(black[p].second == white[q].second && black[p].first < white[q].first){candidate = N + 1; break;}}
        if(candidate < bestBlack){bestBlack = candidate;}
    }

    puts((bestWhite <= bestBlack) ? "A" : "B");

    return 0;
}
