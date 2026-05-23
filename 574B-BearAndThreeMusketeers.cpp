#include <cstdio>
#include <map>
#include <set>


int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::map<long, long> degree;
    for(long p = 1; p <= n; p++){degree.insert(std::pair<long, long>(p, 0));}

    std::set<std::pair<long, long> > edges;
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld\n", &x, &y);
        edges.insert(std::pair<long, long>(x, y));
        edges.insert(std::pair<long, long>(y, x));
        ++degree[x]; ++degree[y];
    }

    long ans(-1);

    for(std::set<std::pair<long, long> >::iterator setIter = edges.begin(); setIter != edges.end(); ++setIter){

        std::pair<long, long> edge = *setIter;
        long x = edge.first; long y = edge.second;

        for(long p = 1; p <= n; p++){
            if(edges.count(std::pair<long, long>(x, p)) <= 0 || edges.count(std::pair<long, long>(y, p)) <= 0){continue;} 
            long total = degree[x] + degree[y] + degree[p] - 6;
            if(ans < 0 || total < ans){ans = total;}
        }
    }

    printf("%ld\n", ans);

    return 0;
}
