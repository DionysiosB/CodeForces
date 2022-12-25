#include <cstdio>
#include <vector>


int main(){

    int n; scanf("%d\n", &n);
    std::vector<std::vector<long long> > payoff(n + 1, std::vector<long long>(n + 1, 0));
    std::vector<long long> diagSumA(2 * n + 1, 0);
    std::vector<long long> diagSumB(2 * n + 1, 0);

    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= n; col++){
            scanf("%lld", &payoff[row][col]);
            diagSumA[row + col] += payoff[row][col];
            diagSumB[n + row - col] += payoff[row][col];
        }
    }


    std::vector<long long> maxValue(2, 0);
    std::vector<std::pair<int,int> > pos(2, std::pair<int, int>(0,0));
    pos[0] = std::pair<int, int>(1,1); pos[1] = std::pair<int, int>(1,2);

    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= n; col++){
            int w = (row + col) % 2;
            long long test = diagSumA[row + col] + diagSumB[n + row - col] - payoff[row][col];
            if(test > maxValue[w]){pos[w].first = row; pos[w].second = col; maxValue[w] = test;}
        }
    }

    printf("%lld\n%d %d %d %d\n", maxValue[0] + maxValue[1], pos[0].first, pos[0].second, pos[1].first, pos[1].second);

    return 0;
}
