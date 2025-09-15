#include <cstdio>
#include <vector>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){

        long n; scanf("%ld", &n);
        std::vector<std::vector<long> > av(n);
        std::map<long, std::pair<long, long> > m;

        long mxpos(-1);
        for(long p = 0; p < n; p++){
            long k; scanf("%ld", &k);
            mxpos = (mxpos > k ? mxpos : k);
            av[p] = std::vector<long>(k);
            for(long u = 0; u < k; u++){
                scanf("%ld", &av[p][u]);
                if(!m.count(u) || av[p][u] < m[u].first){
                    //This only works if all elements are distinct
                    m[u] = std::make_pair(av[p][u], p);
                }
            }
        }

        long idx(0);
        std::vector<long> ans(mxpos);
        while(idx < mxpos){
            long wv = m[idx].second;
            for(long p = idx; p < av[wv].size(); p++){ans[p] = av[wv][p];}
            idx = av[wv].size();
        }


        for(long x : ans){printf("%ld ", x);}
        puts("");
    }

}
