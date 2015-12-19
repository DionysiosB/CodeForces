#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

const int N = 300;
int n;
std::vector<int> input(N + 1, 0);
std::vector<int> output(N + 1, -1);
std::vector<bool> visited(N + 1, 0);
std::vector<std::string> A(N + 1);
std::vector<int> pos, num;


void dfs(int index){
    if(visited[index]){return;}
    visited[index] = 1;
    pos.push_back(index);
    num.push_back(input[index]);
    for(int p = 1; p <= n; p++){if(A[index][p - 1] == '1' && !visited[p]){dfs(p);}}
}


int main(){

    scanf("%d\n", &n);
    for(int p = 1; p <= n; p++){scanf("%d", &input[p]);}
    scanf("\n");
    for(int p = 1; p <= n; p++){getline(std::cin, A[p]);}

    for(int p = 1; p <= n; p++){
        if(visited[p]){continue;}
        dfs(p);
        sort(pos.begin(), pos.end()); sort(num.begin(), num.end());
        for(int q = 0; q < pos.size(); q++){output[pos[q]] = num[q];}
        pos.clear(); num.clear();
    }
    for(int p = 1; p <= n; p++){if(output[p] < 0){output[p] = input[p];}}
    for(int p = 1; p <= n; p++){printf("%d ", output[p]);}; puts("");

    return 0;
}
