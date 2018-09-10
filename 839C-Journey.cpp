#include <cstdio>
#include <vector>

double averageLength(long node, const std::vector<std::vector<long> > &m, std::vector<bool> &been){

    if(been[node]){return 0;}
    been[node] = 1;
    double num(0), den(0);
    for(long p = 0; p < m[node].size(); p++){
        long cur = m[node][p];
        if(been[cur]){continue;}
        ++den;
        num += (1 + averageLength(cur, m, been));
    }

    if(den > 0){return (num / den);}
    return 0;
}


int main(){

    long n; scanf("%ld", &n);
    std::vector<std::vector<long> > g(n + 1);
    for(long p = 1; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
    }

    std::vector<bool> visited(n + 1, 0);
    double avg = averageLength(1, g, visited);
    printf("%.7lf\n", avg);

    return 0;
}
