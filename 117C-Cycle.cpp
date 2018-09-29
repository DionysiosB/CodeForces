#include <iostream>
#include <vector>


void dfs(long node, long from, const std::vector<std::vector<bool> > &g, std::vector<bool> &visited, std::vector<long> &cycle){

    if(visited[node]){return;}
    visited[node] = 1;
    if(cycle.size() > 0){return;}

    for(long u = 0; u < g[node].size(); u++){
        if(!g[node][u]){continue;}
        if((from >= 0) && g[u][from]){cycle.push_back(1 + from); cycle.push_back(1 + node); cycle.push_back(1 + u); return;}
        if(visited[u]){continue;}
        dfs(u, node, g, visited, cycle);
    }

    return;
}


int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n; 
    std::vector<std::vector<bool> > g(n, std::vector<bool>(n, 0));

    for(long p = 0; p < n; p++){
        std::string s; std::cin >> s;
        for(long u = 0; u < n; u++){g[p][u] = s[u] - '0';}
    }

    std::vector<long> cycle;
    std::vector<bool> visited(n, 0);
    for(long p = 0; p < n; p++){
        if(visited[p]){continue;}
        dfs(p, -1, g, visited, cycle);
        if(cycle.size() > 0){break;}
    }

    if(cycle.size() >= 3){std::cout << cycle[0] << " " << cycle[1] << " " << cycle[2] << std::endl;}
    else{std::cout << "-1" << std::endl;}

    return 0;
}
