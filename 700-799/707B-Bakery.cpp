#include <iostream>
#include <vector>
#include <set>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, m, k; std::cin >> n >> m >> k;
    std::vector<std::pair<std::pair<long, long>, long> > edges(m);
    for(long p = 0; p < m; p++){
        long x, y, d; std::cin >> x >> y >> d;
        edges[p] = std::make_pair(std::make_pair(x, y), d);
    }

    std::set<long> storage;
    for(long p = 0; p < k; p++){
        long x; std::cin >> x;
        storage.insert(x);
    }

    long minDist = -1;
    for(long p = 0; p < edges.size(); p++){
        long x = edges[p].first.first;
        long y = edges[p].first.second;
        long d = edges[p].second;
        if(storage.count(x) == storage.count(y)) continue;
        if(minDist < 0 || d < minDist){minDist = d;}
    }

    std::cout << minDist << std::endl;

    return 0;
}
