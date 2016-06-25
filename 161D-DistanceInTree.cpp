#include <cstdio>
#include <vector>

std::vector<std::vector<long long> > count;
std::vector<std::vector<long long> > edges;
long long n, k, output;

void dfs(long long node, long long from){

    count[node][0] = 1;
    for(long long p = 0; p < edges[node].size(); p++){
        long long v = edges[node][p];
        if(v == from){continue;}
        dfs(v , node);
        for(long long d = 1; d <= k; d++){output += count[node][d - 1] * count[v][k - d];}
        for(long long d = 1; d <= k; d++){count[node][d] += count[v][d - 1];}
    }
}



int main(){

    scanf("%lld %lld\n", &n, &k);
    edges.resize(n + 1); count.resize(n + 1, std::vector<long long>(k + 1, 0));
    output = 0;

    for(long p = 0; p < n - 1; p++){
        long a, b; scanf("%ld %ld\n", &a, &b);
        edges[a].push_back(b); edges[b].push_back(a);
    }

    dfs(1, -1);
    printf("%lld\n", output);

    return 0;
}
