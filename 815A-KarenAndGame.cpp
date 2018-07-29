#include <cstdio>
#include <vector>
#include <climits>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::vector<long> > g(n, std::vector<long>(m, 0));
    std::vector<long> rv(n, LONG_MAX);
    std::vector<long> cv(m, LONG_MAX);

    for(long row = 0; row < n; row++){
        for(long col = 0; col < m; col++){
            scanf("%ld", &g[row][col]);
            rv[row] = (rv[row] < g[row][col]) ? rv[row] : g[row][col];
            cv[col] = (cv[col] < g[row][col]) ? cv[col] : g[row][col];
        }
    }

    bool possible(1);
    for(long row = 0; row < n; row++){
        if(!possible){break;}
        for(long col = 0; col < m; col++){
            if(g[row][col] != rv[row] + cv[col]){possible = 0; break;}
        }
    }

    if(!possible){puts("-1"); return 0;}

    long total(0);
    for(long row = 0; row < n; row++){total += rv[row];}
    for(long col = 0; col < m; col++){total += cv[col];}

    for(long row = 0; row < n; row++){for(long u = 0; u < rv[row]; u++){printf("row %ld\n", row + 1);}}
    for(long col = 0; col < m; col++){for(long u = 0; u < cv[col]; u++){printf("col %ld\n", col + 1);}}

    return 0;
}
