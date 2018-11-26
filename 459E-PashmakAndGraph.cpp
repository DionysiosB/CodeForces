#include <cstdio>
#include <vector>
#include <map>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::map<long, std::vector<std::pair<long, long> > > g;
    for(long p = 0; p < m; p++){
        long u, v, w; scanf("%ld %ld %ld", &u, &v, &w);
        g[w].push_back(std::make_pair(u, v));
    }

    std::vector<long> f(n + 1, 0), cur(n + 1, 0);
    long maxLength(0);
    for(std::map<long, std::vector<std::pair<long, long> > >::iterator it = g.begin(); it != g.end(); it++){
        const std::vector<std::pair<long, long> > edges = it->second;
        for(long p = 0; p < edges.size(); p++){cur[edges[p].second] = 0;}
        for(long p = 0; p < edges.size(); p++){
            long u = edges[p].first;
            long v = edges[p].second;
            cur[v] = (cur[v] > f[u] + 1) ? cur[v] : (f[u] + 1);
        }

        for(long p = 0; p < edges.size(); p++){
            long u = edges[p].first;
            long v = edges[p].second;
            f[v] = (f[v] > cur[v]) ? f[v] : cur[v];
            maxLength = (maxLength > f[v]) ? maxLength : f[v];
        }
    }

    printf("%ld\n", maxLength);

    return 0;
}
