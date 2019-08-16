#include <iostream>
#include <vector>
#include <algorithm>

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

    sort(dist.begin(), dist.end());

    int64_t minSum(0);
    for(int64_t p = 0; p < n; p++){minSum = (minSum > dist[p].second) ? minSum : dist[p].second;} //Assume all watered by the second;

    for(int64_t p = 0; p < n; p++){
        int64_t rasq = dist[p].first;
        int64_t rbsq(0);
        for(int64_t q = p + 1; q < n; q++){rbsq = (rbsq > dist[q].second) ? rbsq : dist[q].second;}
        minSum = ((minSum < (rasq + rbsq)) ? minSum : (rasq + rbsq));
    }

    std::cout << minSum << std::endl;

    return 0;
}
