#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::pair<long, long> > v(n);
        for(long p = 0; p < n; p++){scanf("%ld", &v[p].first);}
        for(long p = 0; p < n; p++){scanf("%ld", &v[p].second);}
        sort(v.begin(), v.end());
        for(long p = 0; p < n; p++){printf("%ld ", v[p].first);}; puts("");
        for(long p = 0; p < n; p++){printf("%ld ", v[p].second);}; puts("");
    }

}
