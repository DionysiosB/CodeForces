#include <cstdio>
#include <vector>

std::vector<std::vector<int> > edges;
std::vector<bool> visited;
int totalVisited(0);

void dfs(int node){
    if(visited[node]){return;}
    visited[node] = 1; ++totalVisited;
    for(int p = 0; p < edges[node].size(); p++){dfs(edges[node][p]);}
}


int main(){

    int n, m; scanf("%d %d\n", &n, &m);
    if(n != m){puts("NO"); return 0;}

    edges.resize(n + 1); visited.resize(n + 1);
    for(int p = 0; p < m; p++){
        int a, b; scanf("%d %d\n", &a, &b);
        edges[a].push_back(b); edges[b].push_back(a);
    }

    dfs(1);
    if(totalVisited < n){puts("NO");}
    else{puts("FHTAGN!");}

    return 0;
}
