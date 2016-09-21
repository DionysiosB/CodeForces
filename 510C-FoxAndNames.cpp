#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>

const int N = 26;
std::vector<bool> visited(N, 0);
std::vector<bool> inpath(N, 0);
std::vector<char> sequence;
std::vector<std::vector<int> > previous(N);

void dfs(int x){

    if(visited[x]){return;}
    visited[x] = 1; inpath[x] = 1;
    for(int p = 0; p < previous[x].size(); p++){
        int current = previous[x][p];
        if(inpath[current]){puts("Impossible"); exit(0);}
        else if(!visited[current]){dfs(current);}
    }
    inpath[x] = 0;
    sequence.push_back('a' + x);
}

int main(){

    int n; scanf("%d\n", &n);
    std::vector<std::string> names(n);
    for(int p = 0; p < n; p++){getline(std::cin, names[p]);}
    for(int p = 0; p < n - 1; p++){
        bool done = 0;
        for(int t = 0; t < names[p].size() && t < names[p + 1].size(); t++){
            int x = names[p][t] - 'a';
            int y = names[p + 1][t] - 'a';
            if(x != y){previous[y].push_back(x); done = 1; break;}
        }
        if(!done && names[p + 1].size() < names[p].size()){puts("Impossible"); exit(0);}
    }

    for(int p = 0; p < N; p++){dfs(p);}
    for(int p = 0; p < N; p++){putchar(sequence[p]);}; puts("");

    return 0;
}
