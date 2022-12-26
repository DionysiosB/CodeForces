#include <iostream>
#include <vector>

int main(){

    const int N = 10;
    std::vector<std::pair<int, int> > pos(10);
    pos[0] = std::pair<int, int>(1, 3);
    pos[1] = std::pair<int, int>(0, 0);
    pos[2] = std::pair<int, int>(1, 0);
    pos[3] = std::pair<int, int>(2, 0);
    pos[4] = std::pair<int, int>(0, 1);
    pos[5] = std::pair<int, int>(1, 1);
    pos[6] = std::pair<int, int>(2, 1);
    pos[7] = std::pair<int, int>(0, 2);
    pos[8] = std::pair<int, int>(1, 2);
    pos[9] = std::pair<int, int>(2, 2);


    long x; std::cin >> x;
    std::string num; std::cin >> num;
    std::vector<int> seq(num.size());
    for(int p = 0; p < num.size(); p++){seq[p] = num[p] - '0';}

    std::vector<std::pair<int, int> > diffs(seq.size() - 1);
    for(int p = 0; p < diffs.size(); p++){
        int a = seq[p]; 
        int b = seq[p + 1]; 
        diffs[p] = std::pair<int, int>(pos[b].first - pos[a].first, pos[b].second - pos[a].second);
    }

    int count(0);
    for(int p = 0; p < N; p++){
        std::pair<int, int> current = pos[p];
        bool possible(1);
        for(int q = 0; q < diffs.size(); q++){
            current.first += diffs[q].first;
            current.second += diffs[q].second;

            bool someDigit = 0;
            for(int r = 0; r < N; r++){if(pos[r] == current){someDigit = 1; break;}}
            if(!someDigit){possible = 0; break;}
        }

        if(possible){++count;}

    }

    puts(count <= 1 ? "YES" : "NO");

    return 0;
}
