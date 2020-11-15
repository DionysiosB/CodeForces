#include <iostream>
#include <vector>

long find(std::vector<long> &f, long x){return (x == f[x]) ? x : (f[x] = find(f, f[x]));}

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, m, k; std::cin >> n >> m >> k;
    std::vector<std::pair<long, long> > edges(m);
    for(long p = 0; p < m; p++){std::cin >> edges[p].first >> edges[p].second;}
    std::vector<bool> action(k);
    std::vector<std::pair<long, long> > vertices(k);
    for(long p = 0; p < k; p++){
        std::string s; long x, y;
        std::cin >> s >> x >> y;
        action[p] = (s == "cut");
        vertices[p] = std::make_pair(x, y);
    }

    std::vector<long> L(n + 1); for(long p = 1; p <= n; p++){L[p] = p;}

    std::vector<bool> res;
    for(long p = k - 1; p >= 0; p--){
        long x = vertices[p].first;
        long y = vertices[p].second;
        x = find(L, x);
        y = find(L, y);
        if(action[p]){L[x] = y;}
        else{res.push_back(x == y);}
    }

    for(long p = res.size() - 1; p >= 0; p--){std::cout << (res[p] ? "YES" : "NO") << std::endl;}

    return 0;
}
