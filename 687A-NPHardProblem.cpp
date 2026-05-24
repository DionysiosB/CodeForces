#include <cstdio>
#include <vector>

bool dfs(const std::vector<std::vector<long> > &g, long x, std::vector<int> &r){


    if(r[x] < 0){return false;}
    for(long p = 0; p < g[x].size(); p++){
        long y = g[x][p];
        if(r[y] < 0){
            r[y] = 1 - r[x];
            bool temp = dfs(g, y, r);
            if(!temp){return false;}
        }
        else if(r[y] == r[x]){return false;}
    }

    return true;
}


int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::vector<std::vector<long> > graph(n + 1);
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld\n", &x, &y);
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    std::vector<int> part(n + 1, -1);
    bool possible(1);
    for(long p = 1; p <= n; p++){
        if(part[p] >= 0){continue;}
        part[p] = 0;
        bool t = dfs(graph, p, part);
        if(!t){possible = 0; break;}

    }

    if(!possible){printf("-1\n"); return 0;}

    std::vector<long> left;
    std::vector<long> right;
    for(long p = 1; p <= n; p++){
        if(part[p] == 0){left.push_back(p);}
        else{right.push_back(p);}
    }

    printf("%ld\n", left.size());
    for(long p = 0; p < left.size(); p++){printf("%ld ", left[p]);}
    printf("\n%ld\n", right.size());
    for(long p = 0; p < right.size(); p++){printf("%ld ", right[p]);}
    puts("");

    return 0;
}
