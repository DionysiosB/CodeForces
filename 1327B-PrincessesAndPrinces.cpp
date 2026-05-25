#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<bool> taken(n + 1, 0);
        long x(-1), y(-1);
        for(long p = 1; p <= n; p++){
            long m; scanf("%ld", &m);
            bool married(false);
            for(long u = 0; u < m; u++){
                long cand; scanf("%ld", &cand);
                if(married || taken[cand]){continue;}
                married = true; taken[cand] = true;
            }

            if(!married){x = p;}
        }

        if(x < 0){puts("OPTIMAL");}
        else{
            for(long p = 1; p <= n; p++){if(!taken[p]){y = p; break;}}
            printf("IMPROVE\n%ld %ld\n", x, y);
        }
    }

    return 0;
}
