#include <cstdio>
#include <vector>

int main(){

    long n, k, m; scanf("%ld %ld %ld", &n, &k, &m);
    std::vector<std::vector<long> > v(m);
    for(long p = 0; p < n; p++){long a; scanf("%ld", &a); v[a % m].push_back(a);}
    bool possible(false);
    for(long p = 0; p < m; p++){
        if(v[p].size() < k){continue;}
        possible = true;
        puts("Yes");
        for(long u = 0; u < k; u++){printf("%ld ", v[p][u]);}
        puts(""); break;
    }

    if(!possible){puts("No");}

    return 0;
}
