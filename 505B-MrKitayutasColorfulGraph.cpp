#include <iostream>
#include <vector>

bool dfs(const int &source, const int &target, std::vector<std::vector<bool> > &h, std::vector<bool> &visited){
    if(visited[source] || source == target){return true;}
    visited[source] = true;

    for(int p = 0; p < h.size(); p++){
        if(visited[p] || !h[source][p]){continue;}
        if(p == target){return true;}
        int temp = dfs(p, target, h, visited);
        if(temp){return true;}
    }

    return false;
}



int main(){

    int n, m; scanf("%d %d", &n, &m);
    std::vector<std::vector<std::vector<bool> > > g(m + 1, std::vector<std::vector<bool> >(n + 1, std::vector<bool>(n + 1, 0)));
    for(int p = 0; p < m; p++){
        int a, b, c; scanf("%d %d %d", &a, &b, &c);
        g[c][a][b] = g[c][b][a] = 1;
    }


    int q; scanf("%d", &q);
    while(q--){
        int u, v; scanf("%d %d", &u, &v);
        int count(0);
        for(int p = 1; p <= m; p++){
            std::vector<bool> vis(n + 1, 0);
            count += dfs(u, v, g[p], vis);
        }

        printf("%d\n", count);
    }

    return 0;
}
