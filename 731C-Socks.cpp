#include <cstdio>
#include <vector>
#include <map>

long find(long x, std::vector<long> &v){return (x == v[x]) ? x : (v[x] = find(v[x], v));}

int main(){

    long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
    std::vector<long> col(n, 0); for(long p = 0; p < n; p++){scanf("%ld", &col[p]);}
    std::vector<long> head(n, 0); for(long p = 0; p < n; p++){head[p] = p;}
    while(m--){
        long x, y; scanf("%ld %ld", &x, &y); --x; --y;
        long a = find(x, head); long b = find(y, head); head[b] = a;
    }

    std::vector<std::vector<long> > tp(n);
    for(long p = 0; p < n; p++){tp[find(p, head)].push_back(col[p]);}

    long total(0);
    for(long p = 0; p < n; p++){
        std::vector<long> v = tp[p];
        if(v.size() <= 0){continue;}
        std::map<long, long> g;
        long M(0);
        for(long q = 0; q < v.size(); q++){
            long u = v[q]; 
            if(g.count(u) > 0){++g[u];}
            else{g[u] = 1;}
            M = (M > g[u]) ? M : g[u];
        }
        total += (v.size() - M);
    }

    printf("%ld\n", total);

    return 0;
}
