#include <cstdio>
#include <vector>


int findRowMax(std::vector<int> input){
    int maxCount = 0;
    int count(0);
    for(int col = 0; col < input.size(); col++){
        if(input[col]){++count;}
        else{count = 0;}
        if(count > maxCount){maxCount = count;}
    }

    return maxCount;
}

int findMax(std::vector<int> input){
    int ans(0);
    for(int p = 0; p < input.size(); p++){if(input[p] > ans){ans = input[p];}}
    return ans;
}


int main(){

    int n, m, q; scanf("%d %d %d\n", &n, &m, &q);
    std::vector<std::vector<int> > state(n, std::vector<int>(m, 0));
    std::vector<int> maxVec(n, 0);

    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){scanf("%d", &state[row][col]);}; scanf("\n");
        maxVec[row] = findRowMax(state[row]);
    }

    for(int p = 0; p < q; p++){
        int row, col; scanf("%d %d\n", &row, &col);
        state[row - 1][col - 1] = 1 - state[row - 1][col - 1];
        maxVec[row - 1] = findRowMax(state[row - 1]);
        printf("%d\n", findMax(maxVec));
        //for(int row = 0; row < n; row++){puts(""); for(int col = 0; col < m; col++){printf("%d ", state[row][col]);}}puts("\n=============\n");
    }

    return 0;
}
