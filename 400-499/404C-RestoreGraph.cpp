#include <iostream>
#include <cstdio>
#include <vector>

int main() {

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<std::vector<long> > dist(n); for (long p = 1; p <= n; p++) {long t; scanf("%ld", &t); dist[t].push_back(p);}
    bool possible((dist[0].size() == 1) && (dist[1].size() <= k));

    std::vector<std::pair<long,long>> edgeVec;
    for(long p = 1; p < n; p++){
        if(!possible){break;}
        if(dist[p].size() > 1LL * (k - (p > 1)) * dist[p - 1].size()){possible = 0; break;}
        long a(0), m(p > 1 ? 1 : 0);
        for(long q = 0; q < dist[p].size(); q++){
            if(m >= k){m = 1; ++a;}
            edgeVec.push_back(std::make_pair(dist[p - 1][a], dist[p][q]));
            ++m;
        }
    }

    if(!possible){puts("-1");}
    else{
        printf("%ld\n", edgeVec.size());
        for(long p = 0; p < edgeVec.size(); p++){printf("%ld %ld\n", edgeVec[p].first, edgeVec[p].second);}
    }

    return 0;
}
