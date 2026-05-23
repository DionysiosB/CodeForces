#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);

    std::vector<long> f(n + 1, 0);
    for(long p = 1; p <= n; p++){scanf("%ld", &f[p]);}
    std::vector<long> b(m, 0);
    for(long p = 0; p < m; p++){scanf("%ld", &b[p]);}

    std::vector<long> g(n + 1, 0);
    for(long p = 1; p <= n; p++){
        if(g[f[p]] == 0){g[f[p]] = p;}
        else if(g[f[p]] > 0){g[f[p]] = -1;}
    }


    for(long p = 0; p < m; p++){if(g[b[p]] == 0){puts("Impossible"); return 0;}}
    for(long p = 0; p < m; p++){if(g[b[p]] < 0){puts("Ambiguity"); return 0;}}

    puts("Possible");
    for(long p = 0; p < m; p++){printf("%ld ", g[b[p]]);}
    puts("");

    return 0;
}
