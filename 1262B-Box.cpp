#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n + 1), b(n + 1, 0);
        std::vector<bool> avail(n + 1, 1);
        bool possible(true);
        for(long p = 1; p <= n; p++){
            scanf("%ld", &a[p]);
            if(a[p] < p){possible = false;}
            if(a[p] > a[p - 1]){b[p] = a[p]; avail[a[p]] = 0;}
        }

        if(possible){
            std::vector<long> d; for(long p = 1; p <= n; p++){if(avail[p]){d.push_back(p);}}
            long idx(0);
            for(long p = 1; p <= n; p++){
                if(b[p] > 0){continue;}
                b[p] = d[idx++];
            }
            
            for(long p = 1; p <= n; p++){printf("%ld ", b[p]);}
            puts("");
        }
        else{puts("-1");}
    }

    return 0;
}
