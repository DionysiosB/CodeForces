#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1, 0); for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}
    std::vector<long> d(n); for(long p = 0; p < n; p++){d[p] = a[p + 1] - a[p];}
    std::vector<long> res;

    for(long g = 1; g < n; g++){
        bool possible(true);
        for(long u = 0; u + g < n; u++){if(d[u] != d[u + g]){possible = false; break;}}
        if(possible){res.push_back(g);}
    }
    res.push_back(n);

    printf("%ld\n", res.size());
    for(long p = 0; p < res.size(); p++){printf("%ld ", res[p]);}

    return 0;
}
