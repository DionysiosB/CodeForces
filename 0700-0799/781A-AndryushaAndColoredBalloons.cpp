#include <cstdio>
#include <vector>

void dfs(const std::vector<std::vector<long> > &g, std::vector<long> &cols, long node, long parent, long &maxColor){

    long nextcol(1);
    for(long p = 0; p < g[node].size(); p++){
        long nextNode = g[node][p];
        if(cols[nextNode] > 0){continue;}
        while(nextcol == cols[parent] || nextcol == cols[node]){++nextcol;}
        maxColor = (maxColor > nextcol) ? maxColor : nextcol;
        cols[nextNode] = nextcol++;
        dfs(g, cols, nextNode, node, maxColor);
    }

    return;
}



int main(){

    long n; scanf("%ld", &n);
    std::vector<std::vector<long> > g(n + 1);
    for(long p = 1; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
    }

    std::vector<long> color(n + 1, 0);
    color[1] = 1;
    long numcols(0);
    dfs(g, color, 1, 0, numcols);

    printf("%ld\n", numcols);
    for(int p = 1; p <= n; p++){printf("%ld ", color[p]);}
    puts("");

    return 0;
}
