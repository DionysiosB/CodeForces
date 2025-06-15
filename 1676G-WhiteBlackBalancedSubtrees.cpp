#include <iostream>
#include <vector>

long dfs(long node, const std::vector<std::vector<long> > &g, const std::string &s, long &cnt){
    long total = (s[node] == 'W') - (s[node] == 'B');

    for(long p = 0; p < g[node].size(); p++){
        long x = g[node][p];
        total += dfs(x, g, s, cnt);
    }

    cnt += (!total);
    //std::cout << "Node:" << node << " total:" << total << " Cnt:" << cnt << std::endl;

    return total;
}


int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<std::vector<long> > g(n + 1);
        for(long p = 2; p <= n; p++){
            long x; std::cin >> x;
            g[x].push_back(p);
        }


        std::string s; std::cin >> s;
        s = '_' + s;

        long cnt(0);
        dfs(1, g, s,cnt);
        std::cout << cnt << std::endl;
    }

}
