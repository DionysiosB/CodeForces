#include <cstdio>
#include <vector>

int main(){

    long q; scanf("%ld", &q);
    while(q--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n + 1, 0); for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}
        std::vector<bool> b(n + 1, 0);
        std::vector<long> dur(n + 1, 0);
        for(long p = 1; p <= n; p++){
            if(b[p]){continue;}
            std::vector<long> cycle; long cur(p);
            while(!b[cur]){b[cur] = 1; cycle.push_back(cur); cur = a[cur];}
            for(long k = 0; k < cycle.size(); k++){dur[cycle[k]] = cycle.size();}
        }
        for(long p = 1; p <= n; p++){printf("%ld ", dur[p]);}
        puts("");
    }

    return 0;
}
