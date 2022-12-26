#include <iostream>
#include <vector>

bool dfs(long current, long from, const std::vector<std::vector<long> > &edges, const std::vector<long> &paint, const long &color){

    if(paint[current] != color){return false;}
    for(int p = 0; p < edges[current].size(); p++){
        long v = edges[current][p];
        if(v == from){continue;}
        if(paint[v] != color){return false;}
        if(!dfs(v, current, edges, paint, color)){return false;}
    }

    return true;
}


int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::vector<std::vector<long> > g(n + 1);
    for(long p = 0; p < n - 1; p++){
        long x, y; std::cin >> x >> y;
        g[x].push_back(y); g[y].push_back(x);
    }
    
    std::vector<long> c(n + 1, -1);
    for(long p = 1; p <= n; p++){std::cin >> c[p];}

    long x(-1), y(-1);
    for(long p = 1; p <= n; p++){
        if(x > 0 && y > 0){break;}
        for(long q = 0; q < g[p].size(); q++){
            long u = g[p][q];
            if(c[p] == c[u]){continue;}
            x = p; y = u; break;
        }
    }

    if(x < 0 && y < 0){std::cout << "YES\n1\n"; return 0;}

    bool possible(true);
    for(int p = 0; p < g[x].size(); p++){
        long u = g[x][p];
        possible &= dfs(u, x, g, c, c[u]);
    }
    if(possible){std::cout << "YES\n" << x << std::endl; return 0;}

    possible = true;
    for(int p = 0; p < g[y].size(); p++){
        long u = g[y][p];
        possible &= dfs(u, y, g, c, c[u]);
    }
    if(possible){std::cout << "YES\n" << y << std::endl; return 0;}

    std::cout << "NO\n";

    return 0;
}
