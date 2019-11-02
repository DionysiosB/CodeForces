#include <cstdio>
#include <vector>

void dfs(long node, long from, const std::vector<std::vector<long> > &g, std::vector<bool> &vis, std::vector<long> &path){

    if(vis[node]){return;}
    vis[node] = 1; path.push_back(node);

    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(vis[u]){continue;}
        dfs(u, node, g, vis, path);
    }

    path.push_back(from);
    return;
}


int main(){

    long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
    std::vector<std::vector<long> > g(n);
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        --x; --y;
        g[x].push_back(y); 
        g[y].push_back(x);
    }

    std::vector<long> path;
    std::vector<bool> visited(n, 0);
    dfs(0, -1, g, visited, path);
    path.pop_back(); path.pop_back();

    long len = ((2 * n) / k) + (((2 * n) % k) > 0);

    //for(long p = 0; p < path.size(); p++){printf("%ld ", 1 + path[p]);}
    long index(0);
    for(long p = 0; p < k; p++){
        if(index + len < path.size()){
            printf("%ld ", len);
            for(long q = 0; q < len; q++){printf("%ld ", 1 + path[index]); ++index;}
        }
        else if(index == path.size()){printf("1 1");}
        else{
            printf("%ld ", path.size() - index);
            while(index < path.size()){printf("%ld ", 1 + path[index]); ++index;}
        }

        puts("");
    }

    return 0;
}
