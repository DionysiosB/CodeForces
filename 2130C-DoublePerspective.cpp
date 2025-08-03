#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::pair<long, long> > v(n);
        for(long p = 0; p < n; p++){scanf("%ld %ld", &v[p].first, &v[p].second);}
        std::vector<long> w;
        for(long p = 0; p < n; p++){
            bool add(true);
            for(long q = 0; add && q < n; q++){
                if(q != p && v[q].first <= v[p].first && v[p].second <= v[q].second){add = false;}
            }
            if(add){w.push_back(p + 1);}
        }

        printf("%ld\n", w.size());
        for(long p = 0; p < w.size(); p++){printf("%ld ", w[p]);}
        puts("");
    }

}
