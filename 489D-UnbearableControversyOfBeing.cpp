#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::vector<std::vector<long> > edges(n + 1);
    std::vector<std::vector<bool> > adj(n + 1, std::vector<bool>(n + 1, 0));

    for(long p = 0; p < m; p++){long a, b; scanf("%ld %ld\n", &a, &b); edges[a].push_back(b); adj[a][b] = 1;}

    long long output(0);
    for(long source = 1; source <= n; source++){
        for(long target = 1; target <= n; target++){
            if(source == target){continue;}
            long long common = 0;
            for(long p = 0; p < edges[source].size(); p++){if(adj[edges[source][p]][target] > 0){++common;}}
            output += common * (common - 1) / 2;
        }
    }

    printf("%lld\n", output);

    return 0;
}
