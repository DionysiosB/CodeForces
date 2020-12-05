#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> col(n);
        std::vector<bool> cv(107, 0);
        for(long p = 0; p < n; p++){
            scanf("%ld", &col[p]);
            cv[col[p]] = 1;
        }

        long res(n + 1);
        for(long cand = 1; cand <= 100; cand++){
            if(!cv[cand]){continue;}
            long idx(0), cnt(0);
            while(idx < n){
                if(col[idx] == cand){++idx; continue;}
                ++cnt; idx += k;
            }

            res = (res < cnt) ? res : cnt;
        }

        printf("%ld\n", res);
    }

}
