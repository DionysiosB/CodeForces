#include<cstdio>
#include<vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> f(n + 1, 0), g(n + 1, 0), h(n + 1, 0), vis(n + 1, 0);
    long m(0);

    for(int p = 1; p <= n; p++){
        scanf("%ld", &f[p]);
        if(f[p] == p){h[++m] = p; g[p] = m; vis[p] = true;}
    }

    bool possible(true);
    for(int p = 1; p <= n; p++){
      if(!vis[p]){
        if(!vis[f[p]]){possible = 0; break;}
        else g[p] = g[f[p]];
      }
    }

    if(!possible){puts("-1");}
    else{
        printf("%ld\n", m);
        for(int p = 1; p <= n; p++){printf("%ld ", g[p]);}; puts(""); 
        for(int p = 1; p <= m; p++){printf("%ld ", h[p]);}; puts("");
    }

    return 0;
}
