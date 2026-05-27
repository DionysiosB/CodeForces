#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n), b(n);
        std::vector<std::pair<long, long> > v;

        for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
        for(long p = 0; p < n; p++){
            for(long q = 0; q < n - 1; q++){
                if(a[q] > a[q+1] || b[q] > b[q+1]){
                    std::swap(a[q],a[q+1]);
                    std::swap(b[q],b[q+1]);
                    v.push_back(std::make_pair(q ,q + 1));
                }
            }
        }

        if(std::is_sorted(a.begin(), a.end()) && is_sorted(b.begin(), b.end())){
            printf("%ld\n", v.size());
            for(long p=0;p<v.size();p++){printf("%ld %ld\n", 1 + v[p].first, 1 + v[p].second);}
        }
        else{puts("-1");}
    }
}
