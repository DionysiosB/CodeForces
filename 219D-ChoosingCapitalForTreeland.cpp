#include <cstdio>
#include <vector>

std::vector<std::pair<long, long> > dist;
std::vector<std::vector<std::pair<long, bool> > > edges;
long totalInv;

void dfs(long vertex, long parent){
    for(long p = 0; p < edges[vertex].size(); p++){
        long neighbor = edges[vertex][p].first;
        if(neighbor == parent){continue;}
        if(dist[neighbor].first > 0){continue;}
        bool needsInv = edges[vertex][p].second;
        dist[neighbor].first = 1 + dist[vertex].first;
        dist[neighbor].second = needsInv + dist[vertex].second;
        totalInv += needsInv;
        dfs(neighbor, vertex);
    }
}


int main(){

    long n; scanf("%ld\n", &n);
    dist.resize(n + 1);
    edges.resize(n + 1);
    totalInv = 0;
    for(long p = 1; p < n; p++){
        long x, y; scanf("%ld %ld\n", &x, &y);
        edges[x].push_back(std::make_pair(y, 0));
        edges[y].push_back(std::make_pair(x, 1));
    }

    dfs(1, 0);

    std::vector<long> capitals;
    long best(n + 1);
    for(long p = 1; p <= n; p++){
        long candidate = totalInv + dist[p].first - 2 * dist[p].second;
        if(candidate == best){capitals.push_back(p);}
        else if(candidate < best){best = candidate; capitals.clear(); capitals.push_back(p);}
    }

    printf("%ld\n", best);
    for(long p = 0; p < capitals.size(); p++){printf("%ld ", capitals[p]);}
    puts("");

    return 0;
}
