#include <cstdio>
#include <vector>

long find(long x, std::vector<long> &v){return (v[x] == x) ? x : (v[x] = find(v[x], v));}

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> f(n + 1); for(long p = 1; p <= n; p++){f[p] = p;}
    std::vector<long> g(n + 1, 1); 
    while(m--){
        long k; scanf("%ld", &k);
        if(k <= 0){continue;}
        long root; scanf("%ld", &root);
        root = find(root, f);
        while(--k){
            long x; scanf("%ld", &x);
            long other = find(x, f);
            if(root == other){continue;}
            else{f[other] = root; g[root] += g[other];}
        }
    }

    for(long p = 1; p <= n; p++){long x = find(p, f); printf("%ld ", g[x]);}
    puts("");

    return 0;
}
