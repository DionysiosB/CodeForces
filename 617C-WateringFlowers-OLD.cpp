#include <iostream>
#include <vector>
#include <algorithm>

bool flcomp(std::pair<int64_t, int64_t> a, std::pair<int64_t, int64_t> b){
    int64_t mina = (a.first < a.second) ? a.first : a.second;
    int64_t minb = (b.first < b.second) ? b.first : b.second;
    return (mina < minb);
}


int main(){

    std::ios_base::sync_with_stdio(false);
    int64_t n, x1, x2, y1, y2; std::cin >> n >> x1 >> y1 >> x2 >> y2;
    std::vector<std::pair<int64_t, int64_t> > dist(n);
    for(int64_t p = 0; p < n; p++){
        int64_t u, v; std::cin >> u >> v;
        int64_t da = (u - x1) * (u - x1) + (v - y1) * (v - y1);
        int64_t db = (u - x2) * (u - x2) + (v - y2) * (v - y2);
        dist[p] = std::make_pair(da, db);
    }

    sort(dist.begin(), dist.end(), flcomp);

    int64_t rasq(0), rbsq(0);
    for(int64_t p = n - 1; p >= 0; p--){
        int64_t dasq = dist[p].first;
        int64_t dbsq = dist[p].second;
        if(rasq >= dasq || rbsq >= dbsq){continue;}
        if(dasq - rasq < dbsq - rbsq){rasq = dasq;}
        else{rbsq = dbsq;}
    }

    std::cout << (rasq + rbsq) << std::endl;

    return 0;
}
