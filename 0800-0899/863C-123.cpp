#include <cstdio>
#include <iostream>
#include <vector>
typedef long long ll;

int main(){

    const int N = 3;
    ll k; int a, b; scanf("%lld %d %d", &k, &a, &b);
    --a; --b;
    std::vector<std::vector<int> > x(N, std::vector<int>(N, 0));
    std::vector<std::vector<int> > y(N, std::vector<int>(N, 0));

    for(int row = 0; row < N; row++){for(int col = 0; col < N; col++){scanf("%d", &x[row][col]); --x[row][col];}}
    for(int row = 0; row < N; row++){for(int col = 0; col < N; col++){scanf("%d", &y[row][col]); --y[row][col];}}
    std::vector<std::vector<int> > visited(N, std::vector<int>(N, -1));

    int cycleLength(k + 1), stepsBefore(k);
    std::vector<std::pair<int, int> > state;
    for(int p = 0; p < N * N + 1 && p < k; p++){
        if(visited[a][b] >= 0){
            cycleLength = p - visited[a][b];
            stepsBefore = visited[a][b];
            break;
        }

        visited[a][b] = p;
        state.push_back(std::make_pair(a, b));

        int nexta = x[a][b];
        int nextb = y[a][b];
        a = nexta; b = nextb;
    }

    ll totalA(0), totalB(0); 
    for(int p = 0; p < stepsBefore; p++){
        int a = state[p].first, b = state[p].second;
        if(a == b){continue;}
        else if((a == 1 && b == 0) || (a == 2 && b == 1) || (a == 0 && b == 2)){++totalA;}
        else{++totalB;}
    }

    k -= stepsBefore; ll cycles(k / cycleLength);
    for(int p = stepsBefore; p < stepsBefore + cycleLength; p++){
        int a = state[p].first, b = state[p].second;
        if(a == b){continue;}
        else if((a == 1 && b == 0) || (a == 2 && b == 1) || (a == 0 && b == 2)){totalA += cycles;}
        else{totalB += cycles;}
    }

    k %= cycleLength;
    for(int p = stepsBefore; p < stepsBefore + k; p++){
        int a = state[p].first, b = state[p].second;
        if(a == b){continue;}
        else if((a == 1 && b == 0) || (a == 2 && b == 1) || (a == 0 && b == 2)){++totalA;}
        else{++totalB;}
    }

    printf("%lld %lld\n", totalA, totalB);

    return 0;
}
