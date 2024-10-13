#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}

        std::vector<std::pair<long, long> > w;
        for(long p = 0; p < n; p++){
            long idx(p);
            for(long q = p + 1; q < n; q++){if(v[q] < v[idx]){idx = q;}}
            if(idx == p){continue;}
            w.push_back(std::make_pair(p + 1, idx + 1));
            for(long q = idx; q > p; q--){v[q] = v[q - 1];}
        }

        printf("%ld\n", w.size());
        for(long p = 0; p < w.size(); p++){
            printf("%ld %ld %ld\n", w[p].first, w[p].second, w[p].second - w[p].first);
        }
    }

}
