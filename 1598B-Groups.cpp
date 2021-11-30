#include <cstdio>
#include <vector>
#include <map>


int main(){

    const int D = 5;
    long t; scanf("%ld", &t);
    while(t--){

        long n; scanf("%ld", &n);
        std::map<std::pair<long, long>, long> first, second, both, neither;
        for(long row = 0; row < n; row++){
            std::vector<int> f(D, 0);
            for(long p = 0; p < D; p++){scanf("%d", &f[p]);}
            for(long u = 0; u < D; u++){
                for(long v = u + 1; v < D; v++){
                    std::pair<long, long> combo = std::make_pair(u, v);
                    if(f[u] && f[v]){++both[combo];}
                    else if(f[u]){++first[combo];}
                    else if(f[v]){++second[combo];}
                    else{++neither[combo];}
                }
            }
        }

        bool possible(false);
        for(long u = 0;!possible &&  u < D; u++){
            for(long v = u + 1; !possible && v < D; v++){
                std::pair<long, long> combo = std::make_pair(u, v);
                if(neither[combo] > 0){continue;}
                if(first[combo] + both[combo] >= n / 2 && second[combo] + both[combo] >= n / 2){possible = true; break;}
            }
        }

        puts(possible ? "YES" : "NO");
    }

}
