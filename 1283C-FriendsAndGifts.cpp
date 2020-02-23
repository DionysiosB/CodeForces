#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> f(n + 1, 0), g(n + 1, 0);
    for(long p = 1; p <= n; p++){scanf("%ld", &f[p]); g[f[p]] = p;}
    std::vector<long> singles; std::vector<bool> h(n + 1, 0);
    for(long p = 1; p <= n; p++){if(f[p] == 0 && g[p] == 0){singles.push_back(p); h[p] = 1;}}

    for(long p = 1; p <= n; p++){
        if(h[p]){continue;}
        long left(p), right(p); h[p] = 1;
        while(f[right] != 0 && h[f[right]] == 0){right = f[right]; h[right] = 1;}
        while(g[left] != 0 && h[g[left]] == 0){left = g[left]; h[left] = 1;}

        if(f[right] != 0){continue;}

        while(singles.size() > 0){
            f[right] = singles.back(); 
            singles.pop_back();
            right = f[right];
        }
        
        f[right] = left;
    }

    long ss = singles.size();
    for(long p = 0; p < ss; p++){f[singles[p % ss]] = singles[(p + 1) % ss];}

    for(long p = 1; p <= n; p++){printf("%ld ", f[p]);}
    puts("");

    return 0;
}
