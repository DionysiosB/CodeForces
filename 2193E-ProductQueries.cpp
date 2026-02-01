#include <cstdio>
#include <vector>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::set<long> s;
        for(int p = 0; p < n; ++p){long x; scanf("%ld", &x); s.insert(x);}
        std::vector<long> v(n + 1, -1);
        for(long x : s){v[x] = 1;}
        for(long p = 1; p <= n; ++p){
            if(v[p] < 0){continue;}
            for(long q = 1; q * p <= n; ++q){
                if(v[q] < 0){continue;}
                long u = v[p] + v[q];
                if(v[q * p] < 0 || u < v[q * p]){v[q * p] = u;}
            }
        }

        for(long p = 1; p <= n; p++){printf("%ld ", v[p]);}
        puts("");
    }

}
